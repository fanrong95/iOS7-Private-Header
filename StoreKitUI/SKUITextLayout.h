/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SKUICachedLayout.h"



@interface SKUITextLayout : NSObject <SKUICachedLayout>

{

    struct __CTFramesetter *_framesetter;

    _Bool _requiresTruncation;

    struct CGSize _size;

    struct __CTFrame *_textFrame;

    struct CGSize _truncatedSize;

}



+ (struct __CFAttributedString *)_newAttributedStringWithRequest:(id)arg1;

+ (struct __CFAttributedString *)newAttributedStringWithText:(id)arg1;

- (void)dealloc;

- (id)initWithLayoutRequest:(id)arg1;

@property(readonly, nonatomic) _Bool requiresTruncation; // @synthesize requiresTruncation=_requiresTruncation;

@property(readonly, nonatomic) struct __CTFrame *textFrame; // @synthesize textFrame=_textFrame;

@property(readonly, nonatomic) struct CGSize textSize; // @synthesize textSize=_size;

@property(readonly, nonatomic) struct CGSize truncatedSize; // @synthesize truncatedSize=_truncatedSize;



@end


