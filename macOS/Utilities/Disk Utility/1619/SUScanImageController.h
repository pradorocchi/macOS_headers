//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SUBaseProgressSheet;

@interface SUScanImageController : NSObject
{
    SUBaseProgressSheet *_progressSheet;
}

@property(retain) SUBaseProgressSheet *progressSheet; // @synthesize progressSheet=_progressSheet;
- (void).cxx_destruct;
- (void)_imageScanComplete:(int)arg1;
- (void)_imageScanStatus:(id)arg1;
- (void)showWithParentWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

