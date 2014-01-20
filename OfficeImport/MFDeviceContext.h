/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class MFBrush, MFFont, MFPalette, MFPath, MFPen, MFTransform, NSObject<MFDeviceDriver>, TSUColor;



__attribute__((visibility("hidden")))

@interface MFDeviceContext : NSObject <NSCopying>

{

    NSObject<MFDeviceDriver> *m_driver;

    _Bool m_textUpdateCP;

    double m_miterLimit;

    int m_textHorizontalAlign;

    int m_textVerticalAlign;

    int m_textDirection;

    MFFont *m_font;

    TSUColor *m_textColour;

    int m_textBreakExtra;

    int m_textBreakCount;

    int m_textCharExtra;

    TSUColor *m_bkColour;

    int m_bkMode;

    struct CGPoint m_brushOrg;

    struct CGPoint m_penPos;

    int m_arcDirection;

    int m_polyFillMode;

    MFTransform *m_transform;

    MFPen *m_pen;

    MFBrush *m_brush;

    MFPalette *m_selectedPalette;

    int m_rop2;

    int m_stretchMode;

    MFPath *m_path;

}



+ (id)deviceContextWithDriver:(id)arg1;

- (id).cxx_construct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (int)getArcDirection;

- (id)getBkColour;

- (int)getBkMode;

- (id)getBrush;

- (struct CGPoint)getBrushOrg;

- (id)getCurrentTransform;

- (id)getFont;

- (double)getMiterLimit;

- (id)getPath;

- (id)getPen;

- (struct CGPoint)getPenPosition;

- (int)getPolyFillMode;

- (int)getRop2;

- (id)getSelectedPalette;

- (int)getStretchBltMode;

- (int)getTextBreakCount;

- (int)getTextBreakExtra;

- (int)getTextCharExtra;

- (id)getTextColour;

- (int)getTextDirection;

- (int)getTextHorizontalAlign;

- (_Bool)getTextUpdateCP;

- (int)getTextVerticalAlign;

- (id)initWithDriver:(id)arg1;

- (void)setArcDirection:(int)arg1;

- (void)setBkColour:(id)arg1;

- (void)setBkMode:(int)arg1;

- (void)setBrush:(id)arg1;

- (void)setBrushOrg:(struct CGPoint)arg1;

- (void)setCurrentTransform:(id)arg1;

- (void)setFont:(id)arg1;

- (void)setMiterLimit:(double)arg1;

- (void)setPath:(id)arg1;

- (void)setPen:(id)arg1;

- (void)setPenPosition:(struct CGPoint)arg1;

- (void)setPolyFillMode:(int)arg1;

- (void)setRop2:(int)arg1;

- (void)setSelectedPalette:(id)arg1;

- (void)setStretchBltMode:(int)arg1;

- (void)setTextCharExtra:(int)arg1;

- (void)setTextColour:(id)arg1;

- (void)setTextDirection:(int)arg1;

- (void)setTextHorizontalAlign:(int)arg1;

- (void)setTextJustification:(int)arg1:(int)arg2;

- (void)setTextUpdateCP:(_Bool)arg1;

- (void)setTextVerticalAlign:(int)arg1;



@end


