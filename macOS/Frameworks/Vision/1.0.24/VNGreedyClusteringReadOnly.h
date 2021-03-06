//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/VNClusteringReadOnly-Protocol.h>

@class NSData, NSNumber, NSString, VNClusteringLogger, VNSuggestionsLogger;

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringReadOnly>
{
    VNClusteringLogger *_clusteringLogger;
    VNSuggestionsLogger *_suggestionsLogger;
    NSString *_cacheFolderPath;
    NSNumber *_thresholdN;
    NSData *_state;
    NSNumber *_vectorMapReadOnlyFlagN;
    shared_ptr_605f6fd7 m_ClusteringImpl_const;
}

+ (id)getRepresentativenessForFaces:(id)arg1 error:(id *)arg2;
+ (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id *)arg2;
- (id)getLevel0ClusteredIdsForFaceId:(id)arg1 error:(id *)arg2;
- (id)getClusteredIds:(id *)arg1;
- (id)getClusterState:(id *)arg1;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)convertUpdatePairsToClusters:(vector_22dfb71c *)arg1;
- (void)setGreedyClustererFaces_const:(shared_ptr_605f6fd7)arg1;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (void)initializeLogging;
- (BOOL)_parseOptions:(id)arg1 error:(id *)arg2;

@end

