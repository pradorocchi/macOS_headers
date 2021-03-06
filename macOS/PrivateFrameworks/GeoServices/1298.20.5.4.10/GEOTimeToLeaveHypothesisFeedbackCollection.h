//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable <NSCopying>
{
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _uiNotification;
    struct {
        unsigned int earliestArrivalOffset:1;
        unsigned int earliestDepartureOffset:1;
        unsigned int latestArrivalOffset:1;
        unsigned int latestDepartureOffset:1;
        unsigned int arrival:1;
        unsigned int departure:1;
        unsigned int numberOfReroutes:1;
        unsigned int uiNotification:1;
    } _has;
}

@property(nonatomic) double latestArrivalOffset; // @synthesize latestArrivalOffset=_latestArrivalOffset;
@property(nonatomic) double earliestArrivalOffset; // @synthesize earliestArrivalOffset=_earliestArrivalOffset;
@property(nonatomic) double latestDepartureOffset; // @synthesize latestDepartureOffset=_latestDepartureOffset;
@property(nonatomic) double earliestDepartureOffset; // @synthesize earliestDepartureOffset=_earliestDepartureOffset;
@property(nonatomic) unsigned int numberOfReroutes; // @synthesize numberOfReroutes=_numberOfReroutes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLatestArrivalOffset;
@property(nonatomic) BOOL hasEarliestArrivalOffset;
@property(nonatomic) BOOL hasLatestDepartureOffset;
@property(nonatomic) BOOL hasEarliestDepartureOffset;
- (int)StringAsUiNotification:(id)arg1;
- (id)uiNotificationAsString:(int)arg1;
@property(nonatomic) BOOL hasUiNotification;
@property(nonatomic) int uiNotification; // @synthesize uiNotification=_uiNotification;
@property(nonatomic) BOOL hasNumberOfReroutes;
- (int)StringAsArrival:(id)arg1;
- (id)arrivalAsString:(int)arg1;
@property(nonatomic) BOOL hasArrival;
@property(nonatomic) int arrival; // @synthesize arrival=_arrival;
- (int)StringAsDeparture:(id)arg1;
- (id)departureAsString:(int)arg1;
@property(nonatomic) BOOL hasDeparture;
@property(nonatomic) int departure; // @synthesize departure=_departure;
- (id)initWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(unsigned long long)arg6;
- (int)bucketValueForTimeDelta:(double)arg1;

@end

