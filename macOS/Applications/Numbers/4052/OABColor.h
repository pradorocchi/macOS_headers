//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OABColor : NSObject
{
}

+ (float)writeOpacityOfColor:(id)arg1;
+ (struct EshColor)writeColor:(id)arg1 flatten:(BOOL)arg2 state:(id)arg3;
+ (struct EshColor)writeColor:(id)arg1 state:(id)arg2;
+ (int)writeSystemColorID:(int)arg1;
+ (id)readColor:(const struct EshColor *)arg1 colorPropertiesManager:(id)arg2 state:(id)arg3;
+ (struct EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2;
+ (int)readColorAdjustmentType:(int)arg1;
+ (int)readSystemColorID:(int)arg1;

@end

