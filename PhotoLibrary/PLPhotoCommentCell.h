/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class PLCloudSharedComment, UILabel, UIView;



@interface PLPhotoCommentCell : UITableViewCell

{

    UILabel *_commentContentLabel;

    UILabel *_commentBylineLabel;

    UIView *_styledSeparatorView;

    PLCloudSharedComment *_comment;

}



+ (id)_attributionStringForComment:(id)arg1;

+ (id)_commentStringForComment:(id)arg1;

+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(_Bool)arg2;

+ (double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;

+ (Class)layerClass;

- (void)_updateContent;

@property(copy, nonatomic) PLCloudSharedComment *comment; // @synthesize comment=_comment;

@property(readonly, nonatomic) UILabel *commentBylineLabel; // @synthesize commentBylineLabel=_commentBylineLabel;

@property(readonly, nonatomic) UILabel *commentContentLabel; // @synthesize commentContentLabel=_commentContentLabel;

- (void)dealloc;

- (void)delete:(id)arg1;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

- (void)layoutSubviews;

- (void)prepareForReuse;

@property(readonly, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;



@end


