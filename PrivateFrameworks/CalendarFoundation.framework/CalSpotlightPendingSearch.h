/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalSpotlightPendingSearch : NSObject <CalSpotlightQueryPendingSearchProtocol, MDSearchQueryDelegate> {
    NSString * _clientBundleID;
    id /* block */  _completionHandler;
    MDSearchQuery * _query;
    NSMutableOrderedSet * _searchableItemResults;
}

@property (copy) NSString *clientBundleID;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MDSearchQuery *query;
@property (retain) NSMutableOrderedSet *searchableItemResults;
@property (readonly) Class superclass;

+ (id)_createSearchQueryWithPredicate:(id)arg1 options:(id)arg2;
+ (id)_pendingSearches;
+ (id)_queue;

- (void).cxx_destruct;
- (void)_searchEnded;
- (void)_startSearchWithQuery:(id)arg1;
- (void)cancel;
- (id)clientBundleID;
- (id /* block */)completionHandler;
- (id)initWithString:(id)arg1 clientBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)query;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchWithString:(id)arg1;
- (id)searchableItemResults;
- (void)setClientBundleID:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setQuery:(id)arg1;
- (void)setSearchableItemResults:(id)arg1;

@end