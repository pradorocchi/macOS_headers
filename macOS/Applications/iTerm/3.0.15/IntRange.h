//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IntRange : NSObject
{
    int min;
    int size;
}

+ (id)rangeWithMin:(int)arg1 limit:(int)arg2;
+ (id)rangeWithMin:(int)arg1 size:(int)arg2;
- (id)description;
- (id)rangesAfterSubtractingRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (BOOL)intersectsRange:(id)arg1;
- (int)limit;
- (BOOL)isEqualToIntRange:(id)arg1;

@end

