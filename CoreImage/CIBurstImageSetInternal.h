/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, CIContext, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;



__attribute__((visibility("hidden")))

@interface CIBurstImageSetInternal : NSObject

{

    NSObject<OS_dispatch_queue> *dq;

    NSObject<OS_dispatch_queue> *dq_yuvdump;

    NSObject<OS_dispatch_semaphore> *sem;

    NSMutableArray *clusterArray;

    int temporalOrder;

    int maxNumPendingFrames;

    _Bool enableAnalysis;

    int dummyAnalysisCount;

    _Bool enableFaceCore;

    _Bool enableDumpYUV;

    _Bool portraitMode;

    NSString *burstCoverSelection;

    CIBurstImageFaceAnalysisContext *faceAnalysisContext;

    CIBurstYUVImage *overrideImage;

    NSDictionary *overrideProps;

    NSMutableArray *allImageIdentifiers;

    NSCountedSet *faceIDCounts;

    NSMutableDictionary *statsByImageIdentifier;

    NSMutableDictionary *clusterByImageIdentifier;

    NSString *burstLogFileName;

    struct __sFILE {

        char *_field1;

        int _field2;

        int _field3;

        short _field4;

        short _field5;

        struct __sbuf _field6;

        int _field7;

        void *_field8;

        void *_field9;

        void *_field10;

        void *_field11;

        void *_field12;

        struct __sbuf _field13;

        struct __sFILEX *_field14;

        int _field15;

        unsigned char _field16[3];

        unsigned char _field17[1];

        struct __sbuf _field18;

        int _field19;

        long long _field20;

    } *burstLogFileHandle;

    CIBurstActionClassifier *actionClassifier;

    CIContext *ciContext;

    int curClusterIndexToProcess;

    NSMutableArray *bestImageIdentifiersArray;

    NSString *burstId;

}



@property CIBurstActionClassifier *actionClassifier; // @synthesize actionClassifier;

- (void)addImage:(id)arg1 identifier:(id)arg2 completionBlock:(id)arg3;

- (void)addImageFromCGImage:(struct CGImage *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(id)arg4;

- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id)arg5;

@property NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers;

- (id)bestImageIdentifiers;

@property NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray;

@property NSString *burstCoverSelection; // @synthesize burstCoverSelection;

@property(retain, nonatomic) NSString *burstId; // @synthesize burstId;

@property NSString *burstLogFileName; // @synthesize burstLogFileName;

@property CIContext *ciContext; // @synthesize ciContext;

@property NSMutableArray *clusterArray; // @synthesize clusterArray;

@property NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier;

- (float)computeActionSelectionThreshold;

- (void)computeAllImageScores;

- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;

- (float)computeCameraTravelDistance;

- (int)computeEmotion:(id)arg1;

- (void)dealloc;

@property NSObject<OS_dispatch_queue> *dq; // @synthesize dq;

@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount;

@property _Bool enableAnalysis; // @synthesize enableAnalysis;

@property _Bool enableDumpYUV; // @synthesize enableDumpYUV;

@property _Bool enableFaceCore; // @synthesize enableFaceCore;

@property CIBurstImageFaceAnalysisContext *faceAnalysisContext; // @synthesize faceAnalysisContext;

@property NSCountedSet *faceIDCounts; // @synthesize faceIDCounts;

- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;

- (id)imageClusterForIdentifier:(id)arg1;

- (id)init;

- (_Bool)isFaceDetectionForced;

@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames;

- (void)performEmotionalRejectionOnCluster:(id)arg1;

@property _Bool portraitMode; // @synthesize portraitMode;

- (void)processClusters:(_Bool)arg1;

- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;

@property NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier;

@property int temporalOrder; // @synthesize temporalOrder;



@end


