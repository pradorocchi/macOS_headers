//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRHyperlink : NSObject
{
    NSString *_url;
    struct _NSRange _range;
}

@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;

@end

