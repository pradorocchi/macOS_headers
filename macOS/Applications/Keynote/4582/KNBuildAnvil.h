//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNFrameBuildAnimator-Protocol.h"

@class NSString, TSDGLDataBuffer, TSDGLParticleSystem, TSDGLShader, TSDGLTextureInfo;

@interface KNBuildAnvil : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    TSDGLParticleSystem *_smokeSystem;
    TSDGLShader *_smokeShader;
    TSDGLTextureInfo *_smokeTexture;
    TSDGLParticleSystem *_specksSystem;
    TSDGLShader *_specksShader;
    TSDGLTextureInfo *_specksTexture;
    struct CGPoint *_cameraShakePoints;
    struct CATransform3D _baseTransform;
    TSDGLShader *_objectShader;
    TSDGLShader *_objectBlurShader;
    TSDGLDataBuffer *_objectDataBuffer;
    TSDGLDataBuffer *_objectBlurDataBuffer;
    struct CGRect _drawableFrame;
    struct CGRect _frameRect;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (BOOL)requiresSingleTexturePerStage;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (struct CGPoint)p_objectTranslationAtPercent:(double)arg1 duration:(double)arg2 objectSmashDuration:(double)arg3 objectFrame:(struct CGRect)arg4 randomGenerator:(id)arg5;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)p_specksSystemForTR:(id)arg1 build:(id)arg2 randomGenerator:(id)arg3;
- (id)p_smokeSystemForTR:(id)arg1 build:(id)arg2 randomGenerator:(id)arg3;
- (struct CGPoint *)p_cameraShakePointsWithRandomGenerator:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

