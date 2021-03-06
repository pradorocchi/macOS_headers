//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMessageBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class TSCHSelectionPath, TSCHSelectionPathType;

@interface GSSPChartSelectionPath : GSSPMessageBase <GSSPAutoDecodable>
{
    TSCHSelectionPathType *mPathType;
    vector_8610e4f5 mAxisIdentifiers;
    vector_e0f2bd7e mIndexes;
    BOOL mBoolArgument;
    TSCHSelectionPath *mSubSelection;
    BOOL mDefinedBoolArgument;
    BOOL mDefinedSubSelection;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedSubSelection; // @synthesize definedSubSelection=mDefinedSubSelection;
@property(readonly, nonatomic) BOOL definedBoolArgument; // @synthesize definedBoolArgument=mDefinedBoolArgument;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearSubSelection;
- (BOOL)clearBoolArgument;
- (void)setSubSelection:(id)arg1;
- (id)subSelection;
- (void)setBoolArgument:(BOOL)arg1;
- (BOOL)boolArgument;
- (void)setIndexes:(const vector_e0f2bd7e *)arg1;
- (vector_e0f2bd7e *)indexes;
- (void)setAxisIdentifiers:(const vector_8610e4f5 *)arg1;
- (vector_8610e4f5 *)axisIdentifiers;
- (void)setPathType:(id)arg1;
- (id)pathType;

@end

