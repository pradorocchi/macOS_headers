//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNKPFRecordingEvent.h"

@interface KNKPFRecordingMovieEvent : KNKPFRecordingEvent
{
    long long mType;
    double mValue;
    unsigned long long mObjectID;
}

@property(nonatomic) unsigned long long objectID; // @synthesize objectID=mObjectID;
@property(nonatomic) double value; // @synthesize value=mValue;
@property(nonatomic) long long type; // @synthesize type=mType;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (_Bool)includesValue:(long long)arg1;
- (id)stringForType:(long long)arg1;

@end

