// SPDX-License-Identifier: LGPL-2.1-or-later

#include "MillPathLine.h"
#include "OpenGlWrapper.h"
#include "GlUtils.h"
#include "Shader.h"

namespace MillSim
{

void MillPathLine::GenerateModel()
{
    mNumVerts = MillPathPointsBuffer.size();
    void* vbuffer = MillPathPointsBuffer.data();

    // vertex buffer
    glGenBuffers(1, &mVbo);
    glBindBuffer(GL_ARRAY_BUFFER, mVbo);
    glBufferData(GL_ARRAY_BUFFER, mNumVerts * sizeof(MillPathPosition), vbuffer, GL_STATIC_DRAW);

    // vertex array
    mVao = [] {
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(
            0,
            3,
            GL_FLOAT,
            GL_FALSE,
            sizeof(MillPathPosition),
            (void*)offsetof(MillPathPosition, X)
        );
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(
            1,
            1,
            GL_INT,
            GL_FALSE,
            sizeof(MillPathPosition),
            (void*)offsetof(MillPathPosition, SegmentId)
        );
    };

    // free
    MillPathPointsBuffer.clear();
}

void MillPathLine::Clear()
{
    MillPathPointsBuffer.clear();
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    GLDELETE_BUFFER(mVbo);
}

void MillPathLine::Render()
{
    glBindBuffer(GL_ARRAY_BUFFER, mVbo);
    mVao();
    glDrawArrays(GL_LINE_STRIP, 0, mNumVerts);
}

}  // namespace MillSim
