//
//  JotGLTexture+Private.h
//  JotUI
//
//  Created by Adam Wulf on 1/3/16.
//  Copyright © 2016 Adonit. All rights reserved.
//

#ifndef JotGLTexture_Private_h
#define JotGLTexture_Private_h


#import "ShaderHelper.h"


@interface JotGLTexture ()

- (void)bindForRenderToQuadWithCanvasSize:(CGSize)canvasSize forProgram:(JotGLProgram*)program;

@end


#endif /* JotGLTexture_Private_h */
