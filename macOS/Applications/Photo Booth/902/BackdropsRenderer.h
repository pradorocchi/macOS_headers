//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Quartz/QCRenderer.h>

@class QCImage;

@interface BackdropsRenderer : QCRenderer
{
}

+ (BOOL)canCreateCGLContext;
@property(readonly) BOOL finishedCapture;
@property(readonly) __weak QCImage *mask;
@property(readonly) __weak QCImage *imageWithAlpha;
@property(readonly) __weak QCImage *originalBackground;
@property(readonly) __weak QCImage *captureImage;
@property struct __CVBuffer *inputImage;
@property BOOL capture;
@property BOOL showBackgroundMotion;
- (id)initWithRenderingContext:(id)arg1;

@end

