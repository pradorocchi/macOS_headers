//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveRequestShareSaveInfo : PBCodable <NSCopying>
{
    NSData *_encryptedPublicSharingKey;
    NSData *_protectedFullToken;
    NSData *_shortTokenHash;
}

@property(retain, nonatomic) NSData *encryptedPublicSharingKey; // @synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEncryptedPublicSharingKey;
@property(readonly, nonatomic) BOOL hasProtectedFullToken;
@property(readonly, nonatomic) BOOL hasShortTokenHash;

@end

