/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSBundle, NSMutableDictionary, NSString;



@interface RenderedHandViewFactory : NSObject

{

    NSBundle *_resourcesBundle;

    NSString *_imagePath;

    struct CGPoint _offset;

    struct CGSize _scale;

    struct CGPDFPage *_page;

    struct CGSize _viewSize;

    _Bool _allowCaching;

    NSMutableDictionary *_angleCache;

    unsigned long long _registeredClientsCount;

}



+ (void)flushAllCaches;

+ (id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4;

+ (id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;

+ (void)unregisterForFactory:(id)arg1;

@property(readonly, nonatomic) _Bool allowCaching; // @synthesize allowCaching=_allowCaching;

- (void)dealloc;

- (void)flushCache;

- (id)imageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;

- (id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(struct CGPoint)arg3 scale:(struct CGSize)arg4 allowCaching:(_Bool)arg5;

@property(readonly, nonatomic) NSString *key;

@property(nonatomic) unsigned long long registeredClientsCount; // @synthesize registeredClientsCount=_registeredClientsCount;

- (id)renderImageForAngle:(double)arg1 viewSize:(struct CGSize)arg2;



@end


