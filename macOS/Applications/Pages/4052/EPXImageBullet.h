//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPXImageBinary;

@interface EPXImageBullet : NSObject
{
    EPXImageBinary *mImageBinary;
    float mRelativeSize;
}

- (float)relativeSize;
- (id)imageBinary;
- (void)dealloc;
- (id)initWithImageBinary:(id)arg1 relativeSize:(float)arg2;

@end

