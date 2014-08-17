<?php

class MediaBisBrowser extends MediaBrowserPlugin {
  
  public function view() {
    $build['form'] = drupal_get_form('bis_media_form');
    
    return $build;
  }
}
