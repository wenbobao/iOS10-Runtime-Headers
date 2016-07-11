/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSADocumentRoot : TSWPDocumentRoot <TSKImportExportDelegate> {
    NSArray * _buildVersionHistory;
    TSCECalculationEngine * _calculationEngine;
    TSTCustomFormatList * _deprecatedTablesCustomFormatList;
    bool  _didLoadControllers;
    bool  _didLoadDocumentFromRevert;
    SFUCryptoKey * _documentCacheDecryptionKey;
    NSObject<OS_dispatch_queue> * _documentCacheDecryptionKeyAccessQueue;
    long long  _documentCacheOnceToken;
    bool  _documentCurrentlyImporting;
    NSString * _documentLanguage;
    unsigned long long  _documentLanguageWritingDirection;
    bool  _documentLocaleWasUpdated;
    TSAFunctionBrowserState * _functionBrowserState;
    bool  _hasPreUFFVersion;
    bool  _isClosed;
    bool  _needsMovieCompatibilityUpgrade;
    int  _needsToCaptureViewState;
    TSAShortcutController * _shortcutController;
    TSKCustomFormatList * _tablesCustomFormatList;
    NSString * _templateIdentifier;
    NSMutableDictionary * _upgradeState;
    TSPLazyReference * _viewStateReference;
    NSMutableSet * _warnings;
}

@property (nonatomic, copy) NSArray *buildVersionHistory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLoadDocumentFromRevert;
@property (getter=isDocumentCurrentlyImporting, nonatomic) bool documentCurrentlyImporting;
@property (nonatomic, readonly) bool documentLocaleWasUpdated;
@property (nonatomic) bool hasPreUFFVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *incompatibleMovieInfosUnplayableOnAllDevices;
@property (nonatomic, readonly) NSArray *incompatibleMovieInfosUnplayableOnThisDevice;
@property (nonatomic, readonly) bool isBrowsingVersions;
@property (nonatomic, readonly) bool isClosed;
@property (nonatomic, readonly) NSSet *missingFontWarningMessages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool needsMovieCompatibilityUpgrade;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *templateIdentifier;
@property (nonatomic, readonly) TSKViewState *viewState;

+ (id)buildVersionHistoryPath;
+ (id)buildVersionHistoryPathPreUFF;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2;
+ (struct CGSize { double x1; double x2; })previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })previewImageSizeForType:(unsigned long long)arg1;
+ (unsigned long long)previewTypeForCurrentDevice;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (id)scaledPreviewImageForType:(unsigned long long)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (id)supportedScalablePreviewNames;
+ (void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(bool)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
+ (bool)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2;
+ (bool)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;
+ (bool)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;

- (void)addWarning:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (id)buildVersionHistory;
- (id)calculationEngine;
- (id)captureViewState;
- (id)captureViewStateForImport;
- (void)captureViewStateIfNeeded;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(bool)arg2;
- (long long)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)consolidatedDocumentWarningsFromWarnings:(id)arg1;
- (id)createViewStateRootForContinuation:(bool)arg1;
- (id)customFormatList;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (id)defaultDraftName;
- (void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3;
- (void)didDownloadRemoteData:(id)arg1;
- (void)didEnterBackground;
- (bool)didLoadDocumentFromRevert;
- (void)didSaveWithEncryptionChange;
- (id)documentCachePath;
- (void)documentCacheWasInvalidated;
- (void)documentDidLoad;
- (id)documentLanguage;
- (bool)documentLocaleWasUpdated;
- (void)enumerateStylesheetsUsingBlock:(id /* block */)arg1;
- (bool)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3;
- (void)fulfillPasteboardPromises;
- (id)functionBrowserState;
- (bool)hasICloudConflict;
- (bool)hasPreUFFVersion;
- (void)importerDidFinish:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(bool)arg2;
- (void)invalidateViewState;
- (bool)isClosed;
- (bool)isDocumentCurrentlyImporting;
- (bool)isMultiPageForQuickLook;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; struct Reference {} *x16; bool x17; }*)arg1 unarchiver:(id)arg2;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (id)missingFontWarningMessages;
- (id)name;
- (id)namedTextStyles;
- (bool)needsMovieCompatibilityUpgrade;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3;
- (struct CGImageSource { }*)newImageSourceForDocumentCachePath:(id)arg1;
- (bool)objectsNeedToBeMigrated:(id)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_captureViewStateForImport:(bool)arg1;
- (void)p_cleanupColumnStyles;
- (id)p_documentCacheDecryptionKey;
- (id)p_documentCacheDecryptionKeyAccessQueue;
- (void)p_initializeDocumentCacheIfNeeded;
- (void)p_iterateDrawables:(id)arg1 removeDrawableCommentBlock:(id /* block */)arg2 removeTextCommentsBlock:(id /* block */)arg3 removeCellCommentBlock:(id /* block */)arg4;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(bool*)arg2 number:(unsigned long long*)arg3;
- (void)p_registerAllFormulasAfterImport;
- (void)p_removeStyles:(id)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)p_updateDocumentLanguageToCurrent;
- (void)p_updateViewStateWithRoot:(id)arg1;
- (void)p_upgradeCustomFormatList;
- (void)p_upgradeDocumentCreationLocale;
- (void)p_upgradeTablesIfNeeded:(unsigned long long)arg1;
- (id)packageDataForWrite;
- (void)pauseRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)prepareForSavingAsTemplate;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (void)prepareToGeneratePreview;
- (id)previewImage;
- (id)previewImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)protected_defaultTextPresetOrdering;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(bool)arg1;
- (id)referencedStylesOfClass:(Class)arg1;
- (void)removeWarning:(id)arg1;
- (void)resetViewState;
- (void)resumeBackgroundActivities;
- (void)resumeRecalculation;
- (void)resumeThumbnailing;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; struct Reference {} *x16; bool x17; }*)arg1 archiver:(id)arg2;
- (void)setBuildVersionHistory:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (void)setCustomFormatListToUpgrade:(id)arg1;
- (void)setDidLoadDocumentFromRevert:(bool)arg1;
- (void)setDocumentCreationLocale:(id)arg1;
- (void)setDocumentCurrentlyImporting:(bool)arg1;
- (void)setDocumentLanguage:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (void)setHasPreUFFVersion:(bool)arg1;
- (void)setNeedsMovieCompatibilityUpgrade:(bool)arg1;
- (void)setShortcutController:(id)arg1;
- (void)setTemplateIdentifier:(id)arg1;
- (id)shortcutController;
- (bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(bool)arg2;
- (void)stashUpgradeState:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; struct Reference {} *x16; bool x17; }*)arg1 unarchiver:(id)arg2;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (id)templateIdentifier;
- (id)tsa_delegate;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (void)upgradeCellStyles;
- (id)upgradeState;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeTextboxPresets;
- (void)upgradeToRemoveRedundantStyleOverrides;
- (void)upgradeToSingleStylesheet;
- (id)viewState;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2;
- (id)warnings;
- (id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2;
- (void)willClose;
- (void)willEnterForeground;
- (bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned long long)writingDirection;

@end