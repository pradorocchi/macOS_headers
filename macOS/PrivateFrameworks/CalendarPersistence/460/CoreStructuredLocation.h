//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALPropertyValue.h>

@class NSString;

@interface CoreStructuredLocation : CALPropertyValue
{
}

+ (id)entityFromManagedObject:(id)arg1;
- (id)coordinates;
@property(retain) NSString *routeType;
@property(retain) NSString *address;
@property(retain) NSString *displayName;
- (double)radius;
- (void)setRadius:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)abURLString;
- (void)setAbURLString:(id)arg1;
- (id)initWithGeoURLString:(id)arg1;

@end

