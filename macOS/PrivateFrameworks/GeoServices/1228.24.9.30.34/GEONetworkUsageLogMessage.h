//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEONetworkUsageLogMessage : PBCodable <NSCopying>
{
    long long _requestErrorCode;
    int _connectionType;
    int _networkService;
    int _placeRequestType;
    int _requestDataSize;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    int _responseDataSize;
    int _responseTime;
    NSMutableArray *_tileSetUsages;
    BOOL _isConnectedToCarplay;
    struct {
        unsigned int requestErrorCode:1;
        unsigned int connectionType:1;
        unsigned int networkService:1;
        unsigned int placeRequestType:1;
        unsigned int requestDataSize:1;
        unsigned int responseDataSize:1;
        unsigned int responseTime:1;
        unsigned int isConnectedToCarplay:1;
    } _has;
}

+ (Class)tileSetUsageType;
@property(nonatomic) BOOL isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(retain, nonatomic) NSMutableArray *tileSetUsages; // @synthesize tileSetUsages=_tileSetUsages;
@property(retain, nonatomic) NSString *requestErrorDescription; // @synthesize requestErrorDescription=_requestErrorDescription;
@property(nonatomic) long long requestErrorCode; // @synthesize requestErrorCode=_requestErrorCode;
@property(retain, nonatomic) NSString *requestErrorDomain; // @synthesize requestErrorDomain=_requestErrorDomain;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) int responseDataSize; // @synthesize responseDataSize=_responseDataSize;
@property(nonatomic) int requestDataSize; // @synthesize requestDataSize=_requestDataSize;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsConnectedToCarplay;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceRequestType;
@property(nonatomic) int placeRequestType; // @synthesize placeRequestType=_placeRequestType;
- (id)tileSetUsageAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetUsagesCount;
- (void)addTileSetUsage:(id)arg1;
- (void)clearTileSetUsages;
- (int)StringAsConnectionType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) BOOL hasRequestErrorDescription;
@property(nonatomic) BOOL hasRequestErrorCode;
@property(readonly, nonatomic) BOOL hasRequestErrorDomain;
@property(nonatomic) BOOL hasResponseTime;
@property(nonatomic) BOOL hasResponseDataSize;
@property(nonatomic) BOOL hasRequestDataSize;
- (int)StringAsNetworkService:(id)arg1;
- (id)networkServiceAsString:(int)arg1;
@property(nonatomic) BOOL hasNetworkService;
@property(nonatomic) int networkService; // @synthesize networkService=_networkService;
- (void)dealloc;

@end

