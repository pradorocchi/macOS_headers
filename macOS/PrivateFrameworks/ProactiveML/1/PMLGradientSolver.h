//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PMLModelCovariates, PMLModelRegressor, PMLModelWeights;

@interface PMLGradientSolver : NSObject
{
    double _learningRate;
    PMLModelCovariates *_covariates;
    double _scale;
    CDUnknownBlockType _gradientCalculator;
    CDUnknownBlockType _predictionCalculator;
    NSMutableArray *_covariateCache;
    NSMutableArray *_regressorCache;
    PMLModelWeights *_weights;
    PMLModelRegressor *_objective;
}

@property(retain) PMLModelRegressor *objective; // @synthesize objective=_objective;
@property(retain) PMLModelWeights *weights; // @synthesize weights=_weights;
- (void).cxx_destruct;
- (double)predict:(id)arg1;
- (double)iteration;
- (double)meanSquaredError;
- (void)solve;
@property(retain) PMLModelCovariates *covariates;
- (id)initWithLearningRate:(double)arg1 weights:(id)arg2 gradientCalculator:(CDUnknownBlockType)arg3 predictionCalculator:(CDUnknownBlockType)arg4;

@end

