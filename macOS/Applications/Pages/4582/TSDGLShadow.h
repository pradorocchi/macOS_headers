//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLShadow : NSObject
{
}

+ (id)sharedContext;
- (void)createOffscreenRenderBuffer:(struct CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(BOOL)arg3 colorRenderBuffer:(unsigned int *)arg4 depthRenderBuffer:(unsigned int *)arg5;
- (struct CGImage *)newCGImageFromGLBuffer:(char **)arg1;
- (void)setupGLTextureParameters;

@end

