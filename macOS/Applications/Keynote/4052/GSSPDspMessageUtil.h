//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSSPDspMessageUtil : NSObject
{
}

+ (void)setEnableChartDivergenceChecking:(BOOL)arg1;
+ (BOOL)enableChartDivergenceChecking;
+ (void)setEnableAutomaticModelVerification:(BOOL)arg1;
+ (BOOL)enableAutomaticModelVerification;
+ (id)jsonNSDictionaryFromSosArrayString:(id)arg1 withObjectContext:(id)arg2 andFilterRules:(id)arg3;
+ (Class)tangierClassFromTypeId:(int)arg1;
+ (Class)tangierClassFromDspArrayString:(id)arg1;
+ (Class)tangierClassFromDspArray:(id)arg1;
+ (id)topLevelMessageClassNameFromDspArray:(id)arg1 reportErrorIn:(id *)arg2;
+ (id)messageFromDspArrayString:(id)arg1 inMode:(int)arg2 objectContext:(id)arg3 styleConversionContext:(id)arg4 error:(id *)arg5;
+ (id)messageFromDspArrayString:(id)arg1 objectContext:(id)arg2 styleConversionContext:(id)arg3 error:(id *)arg4;
+ (id)messageFromDspArrayString:(id)arg1 inMode:(int)arg2 error:(id *)arg3;
+ (id)messageFromDspArrayString:(id)arg1 error:(id *)arg2;
+ (id)messageFromDspArray:(id)arg1 inMode:(int)arg2 forbidBase64Decoding:(BOOL)arg3 isOutgoingCommand:(BOOL)arg4 withRetainer:(struct GSSPRetainer *)arg5 andObjectContext:(id)arg6 andStyleConversionContext:(id)arg7 returnDataConversionContextIn:(id *)arg8 andAuthorListIn:(id *)arg9 reportErrorIn:(id *)arg10;
+ (id)messageFromDspArray:(id)arg1 forbidBase64Decoding:(BOOL)arg2 isOutgoingCommand:(BOOL)arg3 withRetainer:(struct GSSPRetainer *)arg4 andObjectContext:(id)arg5 andStyleConversionContext:(id)arg6 returnDataConversionContextIn:(id *)arg7 andAuthorListIn:(id *)arg8 reportErrorIn:(id *)arg9;
+ (id)messageFromDspArray:(id)arg1 withRetainer:(struct GSSPRetainer *)arg2 andObjectContext:(id)arg3 andStyleConversionContext:(id)arg4 returnDataConversionContextIn:(id *)arg5 andAuthorListIn:(id *)arg6 reportErrorIn:(id *)arg7;
+ (Class)messageClassFromDspArray:(id)arg1;
+ (void)p_performBlockIgnoringModificationsOnNewObjects:(CDUnknownBlockType)arg1;
+ (void)didInitializeObject:(id)arg1;
+ (_Bool)isDeserializingObject:(id)arg1;
+ (_Bool)isInducedVerifyObjectsCommand:(id)arg1;
+ (_Bool)isWebOnlyInducedCommand:(id)arg1;
+ (id)extractMessageDspArray:(id)arg1 mode:(int)arg2 reportErrorIn:(id *)arg3;
+ (id)dspIdFromDspArray:(id)arg1;
+ (id)debugStringFromMessage:(id)arg1;
+ (id)jsonStringFromMessage:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
+ (id)p_serializeMessage:(id)arg1 stream:(struct GSSPStringOutputStream *)arg2 context:(struct GSSPSerializationContext *)arg3;
+ (id)jsonStringWithoutDataBase64EncodingFromMessage:(id)arg1 withObjectContext:(id)arg2 dataUUIDMap:(id *)arg3;
+ (id)jsonStringFromMessage:(id)arg1 withObjectContext:(id)arg2;

@end

