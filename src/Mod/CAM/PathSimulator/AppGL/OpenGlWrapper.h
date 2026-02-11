// SPDX-License-Identifier: LGPL-2.1-or-later

/***************************************************************************
 *   Copyright (c) 2024 Shai Seger <shaise at gmail>                       *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#ifndef __openglwrapper_h__
#define __openglwrapper_h__

#include "GlUtils.h"
#include "DlgCAMSimulator.h"

#define gSimWindow CAMSimulator::DlgCAMSimulator::instance()
#define glClearColor(...) GL(gSimWindow->glClearColor(__VA_ARGS__))
#define glBlendFunc(...) GL(gSimWindow->glBlendFunc(__VA_ARGS__))
#define glClear(...) GL(gSimWindow->glClear(__VA_ARGS__))
#define glGenBuffers(...) GL(gSimWindow->glGenBuffers(__VA_ARGS__))
#define glBindBuffer(...) GL(gSimWindow->glBindBuffer(__VA_ARGS__))
#define glBufferData(...) GL(gSimWindow->glBufferData(__VA_ARGS__))
#define glGenVertexArrays(...) GL(gSimWindow->glGenVertexArrays(__VA_ARGS__))
#define glBindVertexArray(...) GL(gSimWindow->glBindVertexArray(__VA_ARGS__))
#define glEnableVertexAttribArray(...) GL(gSimWindow->glEnableVertexAttribArray(__VA_ARGS__))
#define glVertexAttribPointer(...) GL(gSimWindow->glVertexAttribPointer(__VA_ARGS__))
#define glShaderSource(...) GL(gSimWindow->glShaderSource(__VA_ARGS__))
#define glCompileShader(...) GL(gSimWindow->glCompileShader(__VA_ARGS__))
#define glDeleteShader(...) GL(gSimWindow->glDeleteShader(__VA_ARGS__))
#define glDeleteProgram(...) GL(gSimWindow->glDeleteProgram(__VA_ARGS__))
#define glAttachShader(...) GL(gSimWindow->glAttachShader(__VA_ARGS__))
#define glLinkProgram(...) GL(gSimWindow->glLinkProgram(__VA_ARGS__))
#define glGetProgramiv(...) GL(gSimWindow->glGetProgramiv(__VA_ARGS__))
#define glGetUniformLocation(...) GL(gSimWindow->glGetUniformLocation(__VA_ARGS__))
#define glGetError(...) /* GL( */ gSimWindow->glGetError(__VA_ARGS__) /* ) */
#define glEnable(...) GL(gSimWindow->glEnable(__VA_ARGS__))
#define glColorMask(...) GL(gSimWindow->glColorMask(__VA_ARGS__))
#define glCullFace(...) GL(gSimWindow->glCullFace(__VA_ARGS__))
#define glDepthFunc(...) GL(gSimWindow->glDepthFunc(__VA_ARGS__))
#define glStencilFunc(...) GL(gSimWindow->glStencilFunc(__VA_ARGS__))
#define glStencilOp(...) GL(gSimWindow->glStencilOp(__VA_ARGS__))
#define glDepthMask(...) GL(gSimWindow->glDepthMask(__VA_ARGS__))
#define glDisable(...) GL(gSimWindow->glDisable(__VA_ARGS__))
#define glMatrixMode(...) GL(gSimWindow->glMatrixMode(__VA_ARGS__))
#define glUseProgram(...) GL(gSimWindow->glUseProgram(__VA_ARGS__))
#define glDrawElements(...) GL(gSimWindow->glDrawElements(__VA_ARGS__))
#define glDeleteVertexArrays(...) GL(gSimWindow->glDeleteVertexArrays(__VA_ARGS__))
#define glUniformMatrix4fv(...) GL(gSimWindow->glUniformMatrix4fv(__VA_ARGS__))
#define glUniform3fv(...) GL(gSimWindow->glUniform3fv(__VA_ARGS__))
#define glUniform1i(...) GL(gSimWindow->glUniform1i(__VA_ARGS__))
#define glCreateShader(...) GL(gSimWindow->glCreateShader(__VA_ARGS__))
#define glCreateProgram(...) GL(gSimWindow->glCreateProgram(__VA_ARGS__))
#define glDeleteBuffers(...) GL(gSimWindow->glDeleteBuffers(__VA_ARGS__))
#define glActiveTexture(...) GL(gSimWindow->glActiveTexture(__VA_ARGS__))
#define glBindTexture(...) GL(gSimWindow->glBindTexture(__VA_ARGS__))
#define glGenTextures(...) GL(gSimWindow->glGenTextures(__VA_ARGS__))
#define glTexParameteri(...) GL(gSimWindow->glTexParameteri(__VA_ARGS__))
#define glTexImage2D(...) GL(gSimWindow->glTexImage2D(__VA_ARGS__))
#define glDeleteTextures(...) GL(gSimWindow->glDeleteTextures(__VA_ARGS__))
#define glPolygonOffset(...) GL(gSimWindow->glPolygonOffset(__VA_ARGS__))

#define glBindFramebuffer(...) GL(gSimWindow->glBindFramebuffer(__VA_ARGS__))
#define glUniform1f(...) GL(gSimWindow->glUniform1f(__VA_ARGS__))
#define glGenFramebuffers(...) GL(gSimWindow->glGenFramebuffers(__VA_ARGS__))
#define glFramebufferTexture2D(...) GL(gSimWindow->glFramebufferTexture2D(__VA_ARGS__))
#define glDrawBuffers(...) GL(gSimWindow->glDrawBuffers(__VA_ARGS__))
#define glGenRenderbuffers(...) GL(gSimWindow->glGenRenderbuffers(__VA_ARGS__))
#define glBindRenderbuffer(...) GL(gSimWindow->glBindRenderbuffer(__VA_ARGS__))
#define glRenderbufferStorage(...) GL(gSimWindow->glRenderbufferStorage(__VA_ARGS__))
#define glFramebufferRenderbuffer(...) GL(gSimWindow->glFramebufferRenderbuffer(__VA_ARGS__))
#define glCheckFramebufferStatus(...) GL(gSimWindow->glCheckFramebufferStatus(__VA_ARGS__))
#define glDeleteFramebuffers(...) GL(gSimWindow->glDeleteFramebuffers(__VA_ARGS__))
#define glDeleteRenderbuffers(...) GL(gSimWindow->glDeleteRenderbuffers(__VA_ARGS__))
#define glVertexAttribIPointer(...) GL(gSimWindow->glVertexAttribIPointer(__VA_ARGS__))
#define glUniform4fv(...) GL(gSimWindow->glUniform4fv(__VA_ARGS__))
#define glLineWidth(...) GL(gSimWindow->glLineWidth(__VA_ARGS__))
#define glGetShaderiv(...) GL(gSimWindow->glGetShaderiv(__VA_ARGS__))
#define glGetShaderInfoLog(...) GL(gSimWindow->glGetShaderInfoLog(__VA_ARGS__))

#endif  // !__openglwrapper_h__
