//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSSet;

@interface SGReverseTemplatesJSDataDetectors : NSObject
{
    NSMutableDictionary *_scanners;
    NSSet *_availLocales;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (void).cxx_destruct;
- (id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3;
- (void)dealloc;
- (id)init;

@end

