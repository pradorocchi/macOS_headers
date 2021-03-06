//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FTRegion : NSObject
{
    NSDictionary *_dictionary;
    NSArray *_subRegions;
    FTRegion *_parentRegion;
}

@property(retain) FTRegion *_parentRegion; // @synthesize _parentRegion;
@property(retain) NSDictionary *_dictionary; // @synthesize _dictionary;
- (id)description;
@property(readonly) NSString *regionID;
@property(readonly) NSString *basePhoneNumber;
@property(readonly) NSString *label;
@property(readonly) NSString *isoCode;
- (id)regionWithID:(id)arg1;
@property(readonly, retain) NSArray *subRegions; // @synthesize subRegions=_subRegions;
@property(readonly) FTRegion *parentRegion;
- (void)_setParentRegion:(id)arg1;
- (void)dealloc;
- (id)_initWithDictionary:(id)arg1;

@end

