/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray, NSMutableData, NSMutableDictionary, RTFTextTable;



__attribute__((visibility("hidden")))

@interface RTFReaderState : NSObject

{

    id _delegate;

    unsigned int _defaultToUniCharEncoding;

    NSMutableDictionary *_documentInfoDictionary;

    struct CGSize _paperSize;

    double _lMargin;

    double _rMargin;

    double _bMargin;

    double _tMargin;

    struct CGSize _viewSize;

    int _viewScale;

    int _viewKind;

    NSMutableArray *_attributesStack;

    NSMutableDictionary *_curAttributes;

    unsigned int _level;

    struct _NSAttributeInfo _attributeInfo;

    NSMutableData *_attributeInfoStack;

    long long _tableNestingLevel;

    _Bool _isRTLDocument;

    NSArray *_textBlocks;

    NSMutableArray *_nestedTables;

    RTFTextTable *_currentTable;

    RTFTextTable *_previousTable;

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

}



- (void)_beginTableRow;

- (void)_clearTableCells;

- (_Bool)_currentTableCellIsPlaceholder;

- (void)_ensureTableCells;

- (void)_notifyEndParagraph;

- (void)_notifyEndTable;

- (void)_notifyEndTableCellWithCell:(id)arg1;

- (void)_notifyEndTableRow;

- (void)_notifyProcessString:(id)arg1;

- (void)_notifyStartParagraph;

- (void)_notifyStartTable;

- (void)_notifyStartTableCell;

- (void)_notifyStartTableRow;

- (void)_paragraphInTable;

- (void)_popTableState;

- (void)_pushTableState;

- (void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(_Bool)arg2;

- (void)_setTableCells;

- (void)_updateAttributes;

- (void)addListDefinition:(id)arg1 forKey:(long long)arg2;

- (void)addOverride:(long long)arg1 forKey:(long long)arg2;

- (id)attributeForKey:(id)arg1;

- (long long)baseWritingDirection;

- (_Bool)bold;

- (double)bottomMargin;

- (unsigned int)codePageEncoding;

- (id)currentAttributes;

- (unsigned long long)currentBorderEdge;

- (_Bool)currentBorderIsTable;

- (long long)currentListLevel;

- (long long)currentListNumber;

- (id)currentParagraphStyle;

- (id)currentTable;

- (id)currentTableCell;

- (_Bool)currentTableCellIsPlaceholder;

- (void)dealloc;

- (id)defaultParagraphStyle;

- (unsigned int)defaultToUniCharEncoding;

- (id)documentInfoDictionary;

- (void)endParagraph;

- (void)endTableCell;

- (void)endTableCellDefinition;

- (void)endTableRow;

- (id)font;

- (double)fontSize;

- (_Bool)hasWritingDirectionAttribute;

- (id)initWithDelegate:(id)arg1;

- (_Bool)isLastTableRow;

- (_Bool)italic;

- (void)lastTableRow;

- (double)leftMargin;

- (unsigned int)level;

- (id)listDefinitions;

- (void)mergeTableCellsHorizontally;

- (void)mergeTableCellsVertically;

- (_Bool)multiByteEncoding;

- (id)mutableAttributes;

- (id)mutableParagraphStyle;

- (struct CGSize)paperSize;

- (void)paragraphInTable;

- (void)popState;

- (void)processString:(id)arg1;

- (void)pushState;

- (void)removeAttributeForKey:(id)arg1;

- (double)rightMargin;

- (void)setAttribute:(id)arg1 forKey:(id)arg2;

- (void)setBaseWritingDirection:(long long)arg1;

- (void)setBold:(_Bool)arg1;

- (void)setBottomMargin:(double)arg1;

- (void)setCodePageEncoding:(unsigned int)arg1;

- (void)setCurrentBorderEdge:(unsigned long long)arg1 isTable:(_Bool)arg2;

- (void)setCurrentListLevel:(long long)arg1;

- (void)setCurrentListNumber:(long long)arg1;

- (void)setDefaultToUniCharEncoding:(unsigned int)arg1;

- (void)setFont:(id)arg1;

- (void)setFontIsValid:(_Bool)arg1;

- (void)setFontSize:(double)arg1;

- (void)setHasWritingDirectionAttribute:(_Bool)arg1;

- (void)setItalic:(_Bool)arg1;

- (void)setLeftMargin:(double)arg1;

- (void)setMultiByteEncoding:(_Bool)arg1;

- (void)setPaperSize:(struct CGSize)arg1;

- (void)setRightMargin:(double)arg1;

- (void)setTableFlags:(unsigned long long)arg1;

- (void)setTableNestingLevel:(long long)arg1;

- (void)setTextAlignment:(int)arg1;

- (void)setToUniCharEncoding:(unsigned int)arg1;

- (void)setTopMargin:(double)arg1;

- (void)setUnicodeAlternativeLength:(unsigned int)arg1;

- (void)setViewKind:(long long)arg1;

- (void)setViewScale:(long long)arg1;

- (void)setViewSize:(struct CGSize)arg1;

- (void)startParagraph;

- (void)startTableRowDefinition;

- (unsigned int)toUniCharEncoding;

- (double)topMargin;

- (unsigned int)unicodeAlternativeLength;

- (struct CGSize)viewSize;



@end


