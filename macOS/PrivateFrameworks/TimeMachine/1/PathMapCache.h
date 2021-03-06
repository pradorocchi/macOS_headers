//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PathMapCache : NSObject
{
    unsigned long long _cacheSize;
    unsigned long long _cacheHysteresis;
    NSMutableDictionary *_pathMap;
    double _expireTimeDelta;
}

@property(retain, nonatomic) NSMutableDictionary *pathMap; // @synthesize pathMap=_pathMap;
@property unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (void)dealloc;
- (void)flush;
- (id)mapPathFrom:(id)arg1;
- (void)cacheMappedPathFrom:(id)arg1 to:(id)arg2 extraInfo:(id)arg3;
- (id)initWithCacheSize:(unsigned long long)arg1 expireTime:(double)arg2;

@end

