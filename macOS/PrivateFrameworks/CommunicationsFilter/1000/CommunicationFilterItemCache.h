//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject
{
    CommunicationFilterItem *_filterItem;
    long long _isInList;
}

@property(nonatomic) long long isInList; // @synthesize isInList=_isInList;
- (BOOL)matchesItem:(id)arg1;
- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;

@end

