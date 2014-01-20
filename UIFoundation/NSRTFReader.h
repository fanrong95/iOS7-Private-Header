/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSCalendar, NSData, NSFileWrapper, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableData, NSMutableDictionary, NSTextTable, UIColor;



__attribute__((visibility("hidden")))

@interface NSRTFReader : NSObject

{

    NSMutableAttributedString *_topAttributedString;

    NSMutableAttributedString *_curAttributedString;

    NSMutableArray *_attributesStack;

    NSMutableDictionary *_curAttributes;

    unsigned int _level;

    NSData *_rtfData;

    NSMutableDictionary *_fontTable;

    NSFileWrapper *_document;

    union {

        unsigned char thin[128];

        unsigned short fat[128];

    } _textBuffer;

    unsigned long long _textBufferIndex;

    int _rtfVersion;

    int _cocoaVersion;

    int _cocoaSubVersion;

    int _readOnly;

    int _usesScreenFonts;

    unsigned int _defaultToUniCharEncoding;

    struct _NSAttributeInfo _attributeInfo;

    NSMutableData *_attributeInfoStack;

    struct CGSize _paperSize;

    double _lMargin;

    double _rMargin;

    double _bMargin;

    double _tMargin;

    NSMutableDictionary *_documentInfoDictionary;

    struct CGSize _viewSize;

    int _viewScale;

    int _viewKind;

    NSMapTable *_cachedRTFFontTable;

    double _hyphenationFactor;

    double _defaultTabInterval;

    UIColor *_documentBackgroundColor;

    struct _NSRTFPriv _private;

    _Bool _textBufferContentsIsFat;

    _Bool _explicitCharSetEncountered;

    _Bool _isRTLDocument;

    long long _readLimit;

    long long _thumbnailLimit;

    _Bool _limitReached;

    unsigned char _textFlow;

    NSMutableArray *_layoutOrientationSections;

    unsigned long long _verticalOrientationLocation;

    NSArray *_textBlocks;

    NSMutableArray *_nestedTables;

    NSTextTable *_currentTable;

    NSTextTable *_previousTable;

    NSMutableArray *_currentRowArray;

    NSMutableArray *_previousRowArray;

    int _currentRow;

    int _currentColumn;

    int _currentDefinitionColumn;

    _Bool _currentRowIsLast;

    _Bool _setTableCells;

    unsigned long long _currentBorderEdge;

    _Bool _currentBorderIsTable;

    NSMutableDictionary *_listDefinitions;

    int _currentListNumber;

    int _currentListLevel;

    NSCalendar *_gregorianCalendar;

    NSMutableDictionary *_fontAttributesTable;

}



- (id)_RTFDFileWrapper;

- (void)_addListDefinition:(id)arg1 forKey:(long long)arg2;

- (void)_addOverride:(long long)arg1 forKey:(long long)arg2;

- (void)_beginTableRow;

- (void)_clearTableCells;

- (unsigned long long)_currentBorderEdge;

- (_Bool)_currentBorderIsTable;

- (long long)_currentListLevel;

- (long long)_currentListNumber;

- (id)_currentTable;

- (id)_currentTableCell;

- (_Bool)_currentTableCellIsPlaceholder;

- (id)_documentInfoDictionary;

- (void)_endTableCell;

- (void)_endTableCellDefinition;

- (void)_endTableRow;

- (void)_ensureTableCells;

- (void)_lastTableRow;

- (id)_listDefinitions;

- (void)_mergeTableCellsHorizontally;

- (void)_mergeTableCellsVertically;

- (id)_mutableParagraphStyle;

- (void)_paragraphInTable;

- (void)_popState;

- (void)_popTableState;

- (void)_pushState;

- (void)_pushTableState;

- (void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(_Bool)arg2;

- (void)_setCurrentListLevel:(long long)arg1;

- (void)_setCurrentListNumber:(long long)arg1;

- (void)_setRTFDFileWrapper:(id)arg1;

- (void)_setTableCells;

- (void)_setTableNestingLevel:(long long)arg1;

- (void)_startTableRowDefinition;

- (void)_updateAttributes;

- (id)attributedString;

- (id)attributedStringToEndOfGroup;

- (id)attributesAtEndOfGroup;

- (long long)baseWritingDirection;

- (long long)cocoaSubVersion;

- (long long)cocoaVersion;

- (void)dealloc;

- (id)defaultParagraphStyle;

- (double)defaultTabInterval;

- (id)documentAttributes;

- (void)finalize;

- (double)floatCocoaVersion;

- (id)initWithPath:(id)arg1;

- (id)initWithRTF:(id)arg1;

- (id)initWithRTFD:(id)arg1;

- (id)initWithRTFDFileWrapper:(id)arg1;

- (id)mutableAttributedString;

- (id)mutableAttributes;

- (struct CGSize)paperSize;

- (void)processString:(id)arg1;

- (void)setBackgroundColor:(id)arg1;

- (void)setBaseWritingDirection:(long long)arg1;

- (void)setBottomMargin:(double)arg1;

- (void)setCocoaSubVersion:(long long)arg1;

- (void)setCocoaVersion:(long long)arg1;

- (void)setDefaultTabInterval:(double)arg1;

- (void)setHyphenationFactor:(float)arg1;

- (void)setLeftMargin:(double)arg1;

- (void)setMutableAttributedString:(id)arg1;

- (void)setPaperSize:(struct CGSize)arg1;

- (void)setReadLimit:(long long)arg1;

- (void)setReadOnly:(long long)arg1;

- (void)setRightMargin:(double)arg1;

- (void)setTextFlow:(unsigned long long)arg1;

- (void)setThumbnailLimit:(long long)arg1;

- (void)setTopMargin:(double)arg1;

- (void)setUsesScreenFonts:(long long)arg1;

- (void)setViewKind:(long long)arg1;

- (void)setViewScale:(long long)arg1;

- (void)setViewSize:(struct CGSize)arg1;

- (unsigned long long)textFlow;

- (struct CGSize)viewSize;



@end


