/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface CPTextLineMaker : NSObject

{

    NSMutableArray *textLines;

}



- (void)dealloc;

- (unsigned int)makeTextLines:(id)arg1;

- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;

- (id)textLines;

- (void)zOrderSplitLines:(id)arg1;



@end


