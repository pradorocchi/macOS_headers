//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface IEOverviewContentManager : NSObject
{
    NSView *_buttonView;
}

@property(nonatomic) __weak NSView *buttonView; // @synthesize buttonView=_buttonView;
- (void).cxx_destruct;
- (void)updateRolloverText:(id)arg1;
- (void)refreshPage;
- (int)numberOfColumns;

@end

