//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPMediaInfo.h"

#import "GSSPAutoDecodable-Protocol.h"

@class GSSPImageData, GSSPSize, NSString, TSDImageAdjustments, TSDMaskInfo, TSDMediaStyle;

@interface GSSPImageInfo : GSSPMediaInfo <GSSPAutoDecodable>
{
    GSSPImageData *mData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    NSString *mInstantAlphaPath;
    NSString *mTracedPath;
    GSSPSize *mNaturalSize;
    BOOL mHasAlpha;
    GSSPImageData *mOriginalImageData;
    GSSPImageData *mThumbnailImageData;
    TSDImageAdjustments *mImageAdjustments;
    GSSPImageData *mAdjustedImageData;
    GSSPImageData *mEnhancedImageData;
    GSSPImageData *mThumbnailAdjustedImageData;
    BOOL mDefinedOriginalImageData;
    BOOL mDefinedThumbnailImageData;
    BOOL mDefinedImageAdjustments;
    BOOL mDefinedAdjustedImageData;
    BOOL mDefinedEnhancedImageData;
    BOOL mDefinedThumbnailAdjustedImageData;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedThumbnailAdjustedImageData; // @synthesize definedThumbnailAdjustedImageData=mDefinedThumbnailAdjustedImageData;
@property(readonly, nonatomic) BOOL definedEnhancedImageData; // @synthesize definedEnhancedImageData=mDefinedEnhancedImageData;
@property(readonly, nonatomic) BOOL definedAdjustedImageData; // @synthesize definedAdjustedImageData=mDefinedAdjustedImageData;
@property(readonly, nonatomic) BOOL definedImageAdjustments; // @synthesize definedImageAdjustments=mDefinedImageAdjustments;
@property(readonly, nonatomic) BOOL definedThumbnailImageData; // @synthesize definedThumbnailImageData=mDefinedThumbnailImageData;
@property(readonly, nonatomic) BOOL definedOriginalImageData; // @synthesize definedOriginalImageData=mDefinedOriginalImageData;
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
- (BOOL)clearThumbnailAdjustedImageData;
- (BOOL)clearEnhancedImageData;
- (BOOL)clearAdjustedImageData;
- (BOOL)clearImageAdjustments;
- (BOOL)clearThumbnailImageData;
- (BOOL)clearOriginalImageData;
- (void)setThumbnailAdjustedImageData:(id)arg1;
- (id)thumbnailAdjustedImageData;
- (void)setEnhancedImageData:(id)arg1;
- (id)enhancedImageData;
- (void)setAdjustedImageData:(id)arg1;
- (id)adjustedImageData;
- (void)setImageAdjustments:(id)arg1;
- (id)imageAdjustments;
- (void)setThumbnailImageData:(id)arg1;
- (id)thumbnailImageData;
- (void)setOriginalImageData:(id)arg1;
- (id)originalImageData;
- (void)setHasAlpha:(BOOL)arg1;
- (BOOL)hasAlpha;
- (void)setNaturalSize:(id)arg1;
- (id)naturalSize;
- (void)setTracedPath:(id)arg1;
- (id)tracedPath;
- (void)setInstantAlphaPath:(id)arg1;
- (id)instantAlphaPath;
- (void)setMaskInfo:(id)arg1;
- (id)maskInfo;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)setData:(id)arg1;
- (id)data;
- (id)convertTSDImageInfoWithDecodeContext:(struct GSSPDecodeConversionContext *)arg1 error:(id *)arg2;

@end

