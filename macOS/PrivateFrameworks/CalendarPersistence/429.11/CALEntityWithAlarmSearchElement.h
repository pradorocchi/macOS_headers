//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALSearchElement.h>

@class CALTimeRange;

@interface CALEntityWithAlarmSearchElement : CALSearchElement
{
    CALTimeRange *_range;
}

+ (id)entityWithAlarmSearchElementWithinRange:(id)arg1;
+ (id)entityWithAlarmSearchElement;
- (BOOL)matchesEntity:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)dealloc;
- (id)initWithinRange:(id)arg1;

@end

