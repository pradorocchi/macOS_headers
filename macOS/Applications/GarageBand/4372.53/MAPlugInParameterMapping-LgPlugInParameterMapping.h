//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MACore/MAPlugInParameterMapping.h>

@interface MAPlugInParameterMapping (LgPlugInParameterMapping)
+ (id)plugInMappingWithSlot:(long long)arg1 isMIDISlot:(BOOL)arg2 andParameterIndex:(long long)arg3;
- (id)description;
- (id)rangeHighString;
- (id)rangeLowString;
- (id)displayName;
- (id)pluginName;
- (unsigned long long)controlFlags;
- (long long)longValueForString:(id)arg1;
- (id)stringForLongValue:(long long)arg1;
- (id)logicOnlyPath;
- (id)name;
- (long long)longValue;
- (long long)maxLongValue;
- (long long)type;
- (id)initWithSlot:(long long)arg1 isMIDISlot:(BOOL)arg2 andParameterIndex:(long long)arg3;
@end

