/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPAttachment.h"


@class TSDDrawableInfo;



__attribute__((visibility("hidden")))

@interface TSWPDrawableAttachment : TSWPAttachment

{

    TSDDrawableInfo *_drawableInfo;

    int _hOffsetType;

    double _hOffset;

    int _vOffsetType;

    double _vOffset;

}



+ (void)setPositionerClass:(Class)arg1;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (void)attachDrawable:(id)arg1;

- (id)copyWithContext:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) double descent;

- (id)detachDrawable;

@property(readonly, nonatomic) TSDDrawableInfo *drawable; // @synthesize drawable=_drawableInfo;

- (int)elementKind;

- (unsigned long long)enabledKnobMask;

@property(nonatomic) double hOffset; // @synthesize hOffset=_hOffset;

@property(nonatomic) int hOffsetType; // @synthesize hOffsetType=_hOffsetType;

- (id)init;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 drawable:(id)arg2;

- (void)invalidate;

- (_Bool)isAnchored;

- (_Bool)isDrawable;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isHTMLWrap;

- (_Bool)isPartitioned;

- (_Bool)isSearchable;

- (void)loadMessage:(const struct DrawableAttachmentArchive *)arg1 fromUnarchiver:(id)arg2;

- (Class)positionerClass;

- (void)saveMessage:(struct DrawableAttachmentArchive *)arg1 toArchiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (void)setParentStorage:(id)arg1;

@property(nonatomic) double vOffset; // @synthesize vOffset=_vOffset;

@property(nonatomic) int vOffsetType; // @synthesize vOffsetType=_vOffsetType;

- (_Bool)specifiesEnabledKnobMask;

- (id)subclassInitFromUnarchiver:(id)arg1;

- (id)textRepresentationForCopy;

- (id)textStorages;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;

- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)willBeRemovedFromDocumentRoot:(id)arg1;



@end


