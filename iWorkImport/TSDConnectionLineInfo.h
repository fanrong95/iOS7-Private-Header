/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDShapeInfo.h"


@class TSDDrawableInfo;



__attribute__((visibility("hidden")))

@interface TSDConnectionLineInfo : TSDShapeInfo

{

    TSDDrawableInfo *mConnectedFrom;

    TSDDrawableInfo *mConnectedTo;

    struct {

        unsigned int connectedFrom:1;

        unsigned int connectedTo:1;

    } mInvalidFlags;

}



+ (id)cleanupInfos:(id)arg1 duringCommand:(id)arg2 updateGeometries:(_Bool)arg3;

- (void)acceptVisitor:(id)arg1;

- (_Bool)canAnchor;

- (id)commandForSettingConnectionLineType:(int)arg1;

- (struct CGAffineTransform)computeLayoutFullTransform;

- (id)computeLayoutInfoGeometry;

- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;

@property(retain, nonatomic) TSDDrawableInfo *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;

@property(retain, nonatomic) TSDDrawableInfo *connectedTo; // @synthesize connectedTo=mConnectedTo;

- (id)copyWithContext:(id)arg1;

- (void)dealloc;

- (void)didCopy;

- (Class)editorClass;

- (id)initFromUnarchiver:(id)arg1;

- (Class)layoutClass;

- (void)loadFromArchive:(const struct ConnectionLineArchive *)arg1 unarchiver:(id)arg2;

- (void)performBlockWithTemporaryLayout:(id)arg1;

- (id)presetKind;

- (Class)repClass;

- (void)saveGeometryToArchive:(struct GeometryArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchive:(struct ConnectionLineArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (id)titleForBuildChunk:(id)arg1;

- (void)willCopyWithOtherDrawables:(id)arg1;



@end


