/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WBSFormAutoFillFrame.h"



@class WebFrame;



@interface WBUFormAutoFillFrame : NSObject <WBSFormAutoFillFrame>

{

    WebFrame *_webFrame;

}



+ (id)autoFillFrameWithWebFrame:(id)arg1;

- (id)committedURL;

- (_Bool)containsAnyFormElements;

- (void)dealloc;

- (void)enumerateChildFramesUsingBlock:(id)arg1;

- (struct OpaqueFormAutoFillFrame *)frameRef;

- (id)initWithWebFrame:(id)arg1;

- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;

- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;

@property(readonly, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;



@end


