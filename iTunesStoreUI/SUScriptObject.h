/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, NSMutableArray, NSMutableSet, NSString, SUClientInterface, SUScriptNativeObject, SUScriptObjectInvocationBatch, WebFrame;



@interface SUScriptObject : NSObject

{

    NSMutableArray *_eventListeners;

    SUScriptObjectInvocationBatch *_invocationBatch;

    NSLock *_lock;

    SUScriptNativeObject *_nativeObject;

    SUScriptObject *_parentScriptObject;

    NSMutableSet *_scriptObjects;

    unsigned int _checkOutWhenHidden:1;

    unsigned int _isVisible:1;

    NSString *_className;

}



+ (void)initialize;

+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;

+ (_Bool)isSelectorExcludedFromWebScript:(SEL)arg1;

+ (id)webScriptNameForKey:(const char *)arg1;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)DOMElementWithElement:(id)arg1;

- (void)_checkOutAfterVisibilityChange;

@property(readonly, getter=_className) NSString *className;

- (id)_copyListenersForName:(id)arg1;

- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(_Bool)arg3;

- (void)checkInScriptObject:(id)arg1;

- (void)checkInScriptObjects:(id)arg1;

- (void)checkOutBatchTarget:(id)arg1;

- (void)checkOutScriptObject:(id)arg1;

- (void)checkOutScriptObjects:(id)arg1;

@property(readonly) SUClientInterface *clientInterface;

@property(readonly) struct OpaqueJSContext *copyJavaScriptContext;

- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;

- (void)dealloc;

- (void)didPerformBatchedInvocations;

- (void)dispatchEvent:(id)arg1 forName:(id)arg2;

- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(_Bool)arg3;

- (_Bool)equals:(id)arg1;

- (void)finalizeForWebScript;

- (id)init;

- (id)invocationBatch:(_Bool)arg1;

- (_Bool)isVisible;

- (void)loadImageWithURL:(id)arg1 completionBlock:(id)arg2;

- (void)lock;

@property(retain) SUScriptNativeObject *nativeObject;

- (id)newImageWithURL:(id)arg1;

- (id)newImageWithURL:(id)arg1 scale:(double)arg2;

@property SUScriptObject *parentScriptObject;

- (id)parentViewController;

- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(_Bool)arg3;

@property(readonly) NSMutableArray *scriptAttributeKeys;

- (_Bool)scriptObjectIsCheckedIn:(id)arg1;

- (void)setVisible:(_Bool)arg1;

@property(readonly) _Bool sourceIsTrusted;

- (id)stringRepresentation;

- (void)tearDownUserInterface;

- (void)unlock;

- (id)viewControllerFactory;

@property(readonly) WebFrame *webFrame;

- (id)webThreadMainThreadBatchProxy;

- (void)willPerformBatchedInvocations;



@end

