//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapBuilding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding>
{
    CDStruct_cae2bc5c *_buildingFeature;
    NSArray *_sections;
}

@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)dealloc;
- (id)initWithBuildingFeature:(CDStruct_cae2bc5c *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

