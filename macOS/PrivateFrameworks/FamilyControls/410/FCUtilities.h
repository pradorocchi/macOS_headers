//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCUtilities : NSObject
{
}

+ (void)kickMCXDForUID:(unsigned int)arg1;
+ (void)fcdListeningStatusChanged;
+ (void)fcdSaveUsageDataFor:(unsigned int)arg1;
+ (void)fcdReadSettingsFor:(unsigned int)arg1;
+ (void)fcdResetUsageDataFor:(unsigned int)arg1;
+ (void)fcdReadOverridesFor:(unsigned int)arg1;
+ (id)timeStringWithHourIndex:(int)arg1 minuteIndex:(int)arg2 twentyFour:(BOOL)arg3;
+ (id)timeStringWithHourIndex:(int)arg1;
+ (id)shortTimeDurationStringForSeconds:(int)arg1 includeSeconds:(BOOL)arg2;
+ (id)timeDurationStringForSeconds:(int)arg1;

@end

