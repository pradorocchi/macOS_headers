//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VCPImageManager : NSObject
{
    struct OpaqueVTPixelTransferSession *_transferSession;
}

+ (BOOL)loggingEnabled;
+ (id)sharedImageManager;
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2;
- (struct __CVBuffer *)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;
- (struct __CVBuffer *)pixelBufferForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;
- (int)decodeImageSource:(struct CGImageSource *)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (int)drawImage:(struct CGImage *)arg1 withOrientation:(unsigned int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (int)convertPixelBuffer:(struct __CVBuffer **)arg1 toPixelFormat:(int)arg2;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;
- (id)dataForResource:(id)arg1;
- (void)dealloc;
- (id)init;

@end

