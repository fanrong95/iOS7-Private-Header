/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "GLKViewDelegate.h"

#import "RCWaveformGeneratorSegmentOutputObserver.h"



@class CADisplayLink, CALayer, EAGLContext, NSObject<OS_dispatch_queue>, UIColor;



@interface RCGLWaveformRenderer : UIViewController <GLKViewDelegate, RCWaveformGeneratorSegmentOutputObserver>

{

    EAGLContext *_eaglContext;

    CADisplayLink *_displayLink;

    NSObject<OS_dispatch_queue> *_glBuffersQueue;

    NSObject<OS_dispatch_queue> *_renderQueue;

    unsigned int _vertexBuffers[2];

    CDStruct_73a5d3ca _renderedTimeRange;

    vector_ec52ae8c _waveformVertexData;

    unsigned long long _renderedWaveformVertices;

    unsigned int _shaderProgram;

    int _projectionUniform;

    int _modelviewUniform;

    int _foregroundColorUniform;

    _Bool _buffersInitialized;

    _Bool _shadersInitialized;

    _Bool _preparedForRendering;

    _Bool _creatingSnapshot;

    _Bool _centerKeylineRendered;

    struct CGRect _lastViewportRect;

    float _renderedViewportHeight;

    double _cachedContentWidth;

    _Bool _contentWidthDirty;

    CALayer *_modelviewLayer;

    _Bool _isAnimatingModelview;

    _Bool _paused;

    id <RCWaveformDataSource> _dataSource;

    id <RCGLWaveformRendererDelegate> _rendererDelegate;

    double _spacingWidth;

    double _dataPointWidth;

    UIColor *_backgroundColor;

    UIColor *_foregroundColor;

    unsigned long long _renderingHint;

    CDStruct_73a5d3ca _visibleTimeRange;

}



+ (id)waveformImageForRecording:(id)arg1 withImageSize:(struct CGSize)arg2;

- (id).cxx_construct;

- (void).cxx_destruct;

- (void)_clearRenderingState;

- (unsigned int)_compileShaderOfType:(unsigned int)arg1 pathToSource:(id)arg2;

- (_Bool)_currentViewportRequiresRenderingNewSegments;

- (void)_didBecomeActiveNotification:(id)arg1;

- (void)_draw:(id)arg1;

- (void)_logCompilationErrorForShader:(unsigned int)arg1;

- (id)_pathForShader:(id)arg1;

- (float)_pixelOffsetForTime:(double)arg1;

- (float)_pixelsPerSecond;

- (float)_pixelsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;

- (void)_renderCenterKeylineIfNeeded;

- (void)_renderSegments:(id)arg1;

- (void)_renderVisibleTimeRange;

- (void)_setupBuffers;

- (void)_setupGL;

- (void)_setupNotifications;

- (void)_setupShaders;

- (void)_startRendering;

- (void)_startUpdating;

- (void)_stopRendering;

- (void)_stopUpdating;

- (void)_teardownNotifications;

- (double)_timeForPixelOffset:(float)arg1;

- (double)_timeForPixelOffset:(float)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;

- (void)_updateClearColor;

- (void)_updateForegroundColor;

- (void)_updateModelview;

- (void)_updateProjection;

- (void)_willResignActiveNotification:(id)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

- (double)contentWidth;

@property(nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;

@property(nonatomic) __weak id <RCWaveformDataSource> dataSource; // @synthesize dataSource=_dataSource;

- (void)dealloc;

@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;

- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;

- (double)horizontalOffsetAtTime:(double)arg1;

- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;

- (void)loadView;

- (double)pointsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;

- (void)prepareForRendering;

- (id)rasterizeVisibleTimeRangeWithImageSize:(struct CGSize)arg1;

- (void)reloadData;

@property(nonatomic) __weak id <RCGLWaveformRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;

@property(nonatomic) unsigned long long renderingHint; // @synthesize renderingHint=_renderingHint;

@property(nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;

@property(nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;

- (void)setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 withAnimationDuration:(double)arg2;

- (double)timeAtHorizontalOffset:(double)arg1;

- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidLoad;

- (void)viewWillDisappear:(_Bool)arg1;

- (struct CGRect)visibleRect;

- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;

- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;



@end


