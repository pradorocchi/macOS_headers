//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKSosBase.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray, NSString, TSKSecret;

@interface TSKSecureExportKpfRequest : TSKSosBase <GSSPAutoEncodable>
{
    NSString *_snapshotId;
    NSArray *_segments;
    TSKSecret *_secret;
}

- (id)description;
- (void)dealloc;
- (id)initWithSnapshotId:(id)arg1 segments:(id)arg2 secret:(id)arg3;
- (void)populateGSSPMbwsSecureExportKpfRequest:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

