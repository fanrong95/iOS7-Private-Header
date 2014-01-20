/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class WebFramePrivate;



@interface WebFrame : NSObject

{

    WebFramePrivate *_private;

}



+ (PassRefPtr_4af616b4)_createFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3 ownerElement:(struct HTMLFrameOwnerElement *)arg4;

+ (void)_createMainFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;

+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(struct Page *)arg1 frameView:(id)arg2 style:(id)arg3;

+ (PassRefPtr_4af616b4)_createSubframeWithOwnerElement:(struct HTMLFrameOwnerElement *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;

+ (id)stringWithData:(id)arg1 textEncodingName:(id)arg2;

- (id)DOMDocument;

- (_Bool)_allowsFollowingLink:(id)arg1;

- (void)_attachScriptDebugger;

- (struct CGColor *)_bodyBackgroundColor;

- (id)_cacheabilityDictionary;

- (_Bool)_canProvideDocumentSource;

- (_Bool)_canSaveAsWebArchive;

- (struct CGRect)_caretRectAtPosition:(const struct Position *)arg1 affinity:(int)arg2;

- (id)_characterRangeAtPoint:(struct CGPoint)arg1;

- (void)_clearCoreFrame;

- (void)_clearOpener;

- (void)_clearSelection;

- (void)_clearSelectionInOtherFrames;

- (void)_commitData:(id)arg1;

- (id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(struct CGSize)arg2;

- (struct _NSRange)_convertDOMRangeToNSRange:(id)arg1;

- (id)_convertNSRangeToDOMRange:(struct _NSRange)arg1;

- (PassRefPtr_d7fc6f43)_convertToDOMRange:(struct _NSRange)arg1;

- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;

- (id)_dataSource;

- (void)_detachScriptDebugger;

- (void)_dispatchDidReceiveTitle:(id)arg1;

- (id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3;

- (id)_documentFragmentForText:(id)arg1;

- (id)_documentFragmentForWebArchive:(id)arg1;

- (id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;

- (id)_documentFragmentWithNodesAsParagraphs:(id)arg1;

- (void)_drawRect:(struct CGRect)arg1 contentsOnly:(_Bool)arg2;

- (id)_findFrameWithSelection;

- (_Bool)_firstLayoutDone;

- (struct CGRect)_firstRectForDOMRange:(id)arg1;

- (_Bool)_getVisibleRect:(struct CGRect *)arg1;

- (struct OpaqueJSContext *)_globalContextForScriptWorld:(id)arg1;

- (void)_handleKeyEvent:(id)arg1;

- (_Bool)_hasSelection;

- (id)_initWithWebFrameView:(id)arg1 webView:(id)arg2;

- (void)_insertParagraphSeparatorInQuotedContent;

- (id)_internalLoadDelegate;

- (_Bool)_isCommitting;

- (_Bool)_isDescendantOfFrame:(id)arg1;

- (_Bool)_isDisplayingStandaloneImage;

- (_Bool)_isFrameSet;

- (_Bool)_isIncludedInWebKitStatistics;

- (_Bool)_isVisuallyNonEmpty;

- (id)_javaScriptContextForScriptWorld:(id)arg1;

- (id)_layerTreeAsText;

- (void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5;

- (void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3;

- (int)_loadType;

- (_Bool)_loadsSynchronously;

- (id)_markDOMRange;

- (id)_markupStringFromRange:(id)arg1 nodes:(id *)arg2;

- (_Bool)_needsLayout;

- (id)_nodesFromList:(Vector_ee76a023 *)arg1;

- (unsigned int)_pendingFrameUnloadEventCount;

- (id)_rectsForRange:(id)arg1;

- (void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3 matchStyle:(_Bool)arg4;

- (void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(_Bool)arg3 smartReplace:(_Bool)arg4;

- (void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3 matchStyle:(_Bool)arg4;

- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3;

- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3 matchStyle:(_Bool)arg4;

- (void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3;

- (void)_restoreViewState;

- (void)_saveViewState;

- (void)_scrollDOMRangeToVisible:(id)arg1;

- (void)_scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;

- (void)_selectAll;

- (void)_selectNSRange:(struct _NSRange)arg1;

- (struct _NSRange)_selectedNSRange;

- (id)_selectedString;

- (int)_selectionGranularity;

- (id)_selectionRangeForFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;

- (id)_selectionRangeForPoint:(struct CGPoint)arg1;

- (void)_setInternalLoadDelegate:(id)arg1;

- (void)_setIsCommitting:(_Bool)arg1;

- (void)_setLoadsSynchronously:(_Bool)arg1;

- (void)_setProhibitsScrolling:(_Bool)arg1;

- (void)_setSelectionFromNone;

- (void)_setShouldCreateRenderers:(_Bool)arg1;

- (void)_setTextAutosizingWidth:(double)arg1;

- (void)_setTypingStyle:(id)arg1 withUndoAction:(int)arg2;

- (void)_setVisibleSize:(struct CGSize)arg1;

- (_Bool)_shouldFlattenCompositingLayers:(struct CGContext *)arg1;

- (id)_smartDeleteRangeForProposedRange:(id)arg1;

- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1;

- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(_Bool)arg2;

- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(struct OpaqueJSValue *)arg2 inScriptWorld:(id)arg3;

- (id)_stringForRange:(id)arg1;

- (id)_stringWithDocumentTypeStringAndMarkupString:(id)arg1;

- (id)_typingStyle;

- (void)_unmarkAllBadGrammar;

- (void)_unmarkAllMisspellings;

- (id)_unreachableURL;

- (void)_updateBackgroundAndUpdatesWhileOffscreen;

- (void)_userScrolled;

- (struct VisiblePosition)_visiblePositionForPoint:(struct CGPoint)arg1;

- (id)accessibilityRoot;

- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;

- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;

- (struct CGRect)caretRect;

- (struct CGRect)caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3;

- (struct CGRect)caretRectForPosition:(id)arg1;

- (unsigned short)characterAfterCaretSelection;

- (unsigned short)characterBeforeCaretSelection;

- (unsigned short)characterInRelationToCaretSelection:(int)arg1;

- (id)characterRangeAtPoint:(struct CGPoint)arg1;

- (id)childFrames;

- (void)clearRangedSelectionInitialExtent;

- (void)clearSelection;

- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;

- (struct VisiblePosition)closestWordBoundary:(struct VisiblePosition)arg1;

- (void)collapseSelection;

- (void)confirmMarkedText:(id)arg1;

- (struct _NSRange)convertDOMRangeToNSRange:(id)arg1;

- (id)convertNSRangeToDOMRange:(struct _NSRange)arg1;

- (struct Frame *)coreFrame;

- (void)createDefaultFieldEditorDocumentStructure;

- (id)dataSource;

- (void)dealloc;

- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;

- (id)dictationResultMetadataForRange:(id)arg1;

- (id)documentView;

- (id)elementAtPoint:(struct CGPoint)arg1;

- (id)elementRangeContainingCaretSelection;

- (id)endPosition;

- (void)ensureRangedSelectionContainsInitialStartPoint:(struct CGPoint)arg1 initialEndPoint:(struct CGPoint)arg2;

- (void)expandSelectionToElementContainingCaretSelection;

- (void)expandSelectionToSentence;

- (void)expandSelectionToStartOfWordContainingCaretSelection;

- (void)expandSelectionToWordContainingCaretSelection;

- (void)extendSelection:(_Bool)arg1;

- (void)finalize;

- (id)findFrameNamed:(id)arg1;

- (struct CGRect)firstRectForDOMRange:(id)arg1;

- (_Bool)focusedNodeHasContent;

- (struct __CTFont *)fontForSelection:(_Bool *)arg1;

- (void)forceLayoutAdjustingViewSize:(_Bool)arg1;

- (unsigned int)formElementsCharacterCount;

- (id)frameElement;

- (id)frameView;

- (void)getDictationResultRanges:(id *)arg1 andMetadatas:(id *)arg2;

- (struct OpaqueJSContext *)globalContext;

- (_Bool)hasEditableSelection;

- (_Bool)hasRichlyEditableSelection;

- (_Bool)hasSelection;

- (struct CGImage *)imageForNode:(id)arg1 allowDownsampling:(_Bool)arg2 drawContentBehindTransparentNodes:(_Bool)arg3;

- (id)init;

- (id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3;

- (int)innerLineHeight:(id)arg1;

- (id)interpretationsForCurrentRoot;

- (_Bool)isSingleLine;

- (_Bool)isTelephoneNumberParsingAllowed;

- (_Bool)isTelephoneNumberParsingEnabled;

- (id)javaScriptContext;

- (struct OpaqueJSValue *)jsWrapperForNode:(id)arg1 inScriptWorld:(id)arg2;

- (int)layoutCount;

- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;

- (void)loadArchive:(id)arg1;

- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;

- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;

- (void)loadRequest:(id)arg1;

- (id)markedTextDOMRange;

- (_Bool)mediaDataLoadsAutomatically;

- (void)moveSelectionToEnd;

- (void)moveSelectionToPoint:(struct CGPoint)arg1;

- (void)moveSelectionToStart;

- (id)name;

- (_Bool)needsLayout;

- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;

- (int)numberOfPagesWithPageWidth:(float)arg1 pageHeight:(float)arg2;

- (id)parentFrame;

- (int)preferredHeight;

- (void)prepareForPause;

- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;

- (void)printToCGContext:(struct CGContext *)arg1 pageWidth:(float)arg2 pageHeight:(float)arg3;

- (id)provisionalDataSource;

- (id)rangeByExtendingCurrentSelection:(int)arg1;

- (id)rangeByMovingCurrentSelection:(int)arg1;

- (struct CGRect)rectForScrollToVisible;

- (void)recursiveSetUpdateAppearanceEnabled:(_Bool)arg1;

- (void)reload;

- (void)reloadFromOrigin;

- (void)removeUnchangeableStyles;

- (struct CGRect)renderRectForPoint:(struct CGPoint)arg1 isReplaced:(_Bool *)arg2 fontSize:(float *)arg3;

- (id)renderTreeAsExternalRepresentationForPrinting:(_Bool)arg1;

- (_Bool)renderedCharactersExceed:(unsigned long long)arg1;

- (struct CGSize)renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2;

- (void)resetSelection;

- (void)resetTextAutosizingBeforeLayout;

- (void)resumeFromPause;

- (void)revealSelectionAtExtent:(_Bool)arg1;

- (id)scrollableNodeAtViewportLocation:(struct CGPoint)arg1;

- (void)selectNSRange:(struct _NSRange)arg1;

- (void)selectNSRange:(struct _NSRange)arg1 onElement:(id)arg2;

- (void)selectWithoutClosingTypingNSRange:(struct _NSRange)arg1;

- (id)selectedDOMRange;

- (struct _NSRange)selectedNSRange;

- (int)selectionAffinity;

- (_Bool)selectionAtDocumentStart;

- (_Bool)selectionAtSentenceStart;

- (_Bool)selectionAtWordStart;

- (int)selectionBaseWritingDirection;

- (id)selectionRects;

- (id)selectionRectsForCoreRange:(struct Range *)arg1;

- (id)selectionRectsForRange:(id)arg1;

- (int)selectionState;

- (void)sendOrientationChangeEvent:(int)arg1;

- (void)sendScrollEvent;

- (void)setAccessibleName:(id)arg1;

- (void)setBaseWritingDirection:(int)arg1;

- (void)setCaretColor:(struct CGColor *)arg1;

- (void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3;

- (void)setIsActive:(_Bool)arg1;

- (void)setIsSingleLine:(_Bool)arg1;

- (void)setMarkedText:(id)arg1 forCandidates:(_Bool)arg2;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (void)setMediaDataLoadsAutomatically:(_Bool)arg1;

- (void)setNeedsLayout;

- (void)setPluginsPaused:(_Bool)arg1;

- (void)setRangedSelectionBaseToCurrentSelection;

- (void)setRangedSelectionBaseToCurrentSelectionEnd;

- (void)setRangedSelectionBaseToCurrentSelectionStart;

- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2 allowFlipping:(_Bool)arg3;

- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;

- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;

- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;

- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(_Bool)arg3;

- (void)setSelectionChangeCallbacksDisabled:(_Bool)arg1;

- (void)setSelectionGranularity:(int)arg1;

- (_Bool)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(_Bool)arg3;

- (_Bool)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(_Bool)arg3 allowFlipping:(_Bool)arg4;

- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;

- (void)setText:(id)arg1 asChildOfElement:(id)arg2;

- (void)setTimeoutsPaused:(_Bool)arg1;

- (void)smartExtendRangedSelection:(int)arg1;

- (_Bool)spaceFollowsWordInRange:(id)arg1;

- (id)startPosition;

- (void)stopLoading;

- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(_Bool)arg2;

- (id)stringForRange:(id)arg1;

- (void)toggleBaseWritingDirection;

- (void)updateLayout;

- (struct VisiblePosition)visiblePositionForPoint:(struct CGPoint)arg1;

- (id)webView;

- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;

- (id)windowObject;

- (id)wordAtPoint:(struct CGPoint)arg1;

- (id)wordInRange:(id)arg1;

- (int)wordOffsetInRange:(id)arg1;

- (id)wordRangeContainingCaretSelection;

- (id)wordsInCurrentParagraph;



@end


