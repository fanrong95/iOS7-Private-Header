/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CUIRenditionMetrics : NSObject

{

    struct CGSize _imageSize;

    struct CGSize _edgeBottomLeftMargin;

    struct CGSize _edgeTopRightMargin;

    struct CGSize _alignmentBottomLeftMargin;

    struct CGSize _alignmentTopRightMargin;

    double _scale;

    struct crmFlags _crmFlags;

}



- (struct CGSize)alignmentBottomLeftMargin;

- (struct CGRect)alignmentRect;

- (struct CGSize)alignmentTopRightMargin;

- (struct CGSize)edgeBottomLeftMargin;

- (struct CGRect)edgeRect;

- (struct CGSize)edgeTopRightMargin;

- (struct CGSize)imageSize;

- (id)initWithImageSize:(struct CGSize)arg1 edgeBottomLeft:(struct CGSize)arg2 edgeTopRight:(struct CGSize)arg3 alignmentBottomLeft:(struct CGSize)arg4 alignmentTopRight:(struct CGSize)arg5 scalesVertically:(_Bool)arg6 scalesHorizontally:(_Bool)arg7 scale:(double)arg8;

- (struct CGRect)insetRectWithMetrics:(struct CGRect)arg1;

- (double)scale;

- (_Bool)scalesHorizontally;

- (_Bool)scalesVertically;



@end


