//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression;

@interface SKEmoticonDetector : NSObject
{
    NSRegularExpression *_flagRegexp;
    NSRegularExpression *_richFlagRegexp;
    NSRegularExpression *_richSmileyRegexp;
}

- (void).cxx_destruct;
- (id)richSmileyRegexp;
- (id)richFlagRegexp;
- (id)flagRegexp;
- (id)detectEmoticonInRichString:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)_findFlagInRichString:(id)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)_findSmileyInRichString:(id)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)detectEmoticonInString:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;

@end

