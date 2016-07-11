/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate> {
    NSSet * _allSamples;
    <HKDocumentPickerViewControllerDelegate> * _delegate;
    NSMutableSet * _enabledSamples;
    bool  _hasPendingDocumentFetch;
    HKHealthStore * _healthStore;
    long long  _presentationStyle;
    NSMutableArray * _samplesList;
    bool  _showCheckboxes;
    HKSource * _source;
}

@property (nonatomic, readonly) NSSet *allSamples;
@property (nonatomic) <HKDocumentPickerViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *enabledSamples;
@property (nonatomic, retain) HKSource *source;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (void)_enableDocumentSample:(id)arg1 enabled:(bool)arg2;
- (void)_finishWithError:(id)arg1;
- (bool)_isPrompting;
- (bool)_needsSampleRequestDescription;
- (id)_tableHeaderView;
- (id)allSamples;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)arg1;
- (id)delegate;
- (id)enabledSamples;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentAuthorizations:(id)arg1;
- (id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushDetailForDocumentSample:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSamples:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end