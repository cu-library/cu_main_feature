<?php
/**
 * @file
 * cu_main_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function cu_main_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(),
      \'field_image_block_link\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Award Winning Open Source\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'15310bdf-5e1b-408b-8a7b-19ae5569eabd\',
      \'vid\' => NULL,
      \'vuuid\' => \'1e26a683-a08d-4655-8907-c793c08bf24e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Explore new ways to collaborate with your team, discover work-flows to help manage your digital archives and empower digital librarians with the tools they need to exceed expectations\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Explore new ways to collaborate with your team, discover work-flows to help manage your digital archives and empower digital librarians with the tools they need to exceed expectations</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'group.png\',
            \'uri\' => \'public://group.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'873\',
            \'status\' => \'1\',
            \'timestamp\' => \'1524163373\',
            \'uuid\' => \'0da87d98-dee1-4eb2-ba70-0eee259c329c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'32\',
            \'height\' => \'32\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAJcEhZcwAADdcAAA3XAUIom3gAAAAHdElNRQfiARoUOxpPY5OMAAACN0lEQVRIx7XTz0tUURQH8I81SGMlOIm6MZQWgRKkIQYiBu7Ndm0iYha2jHLhqu3Uonb9Ae0CkWgRoeOiFsKEiwKtXSBRIpqC2e/S22Keb97oNNOizt288/1x7n3n3Funcpxy0WnHHcdbb730wIK/jKwFQbDsuSlTnlsWBAuytc0dZgXv5HSV4V1y3glmdVSzD9nyU86hiuwhOT9tGfqTfcCW93oSyBV5eVcSSI/3tgxUsrfatOJkArktROt2Aj1pxabW/QWOuKc7kWdsxwW2ZRJMt2lHarezN7YHQW8teVrWqIMJ5LCvsf2rwwnmoFFZ6aT9qFVBUCgretWOINhxtQwvCIJVR0vQWLzX4J653HV3T88HY+0YpMCPmP6ekB4wZ27fz5YUJZcGS4IgHyOd8l5h2jQWzOiMubwgWNIAdRGYct66p1HW7I1GnNWDFwr46IQPEX/OMY/8Kh6TTo/NeK3OvPuaMKIRXJKRcQk0GkGT++bVeW3G4+Kp0jYEwZfo4hRwK2rTmnHj1qLsVjyBbV8EwYZ0yrCm6CYUo197/LfNltEc5+36o/YW1U2GUwl6N44lvq//kYm2SKkeZ2rwDtQS1C7weR/2uew6leJ7Ra16i2XvbhJt0WSSa0MbJsuwRfXQFz2aIFjXAi7vK3AZtFiPkR19uwf5FoOl9/ikzP4kxgsx9q16E59Vyf7tFP5JgRDnoaZjj7Z4E6+5EIF3aha46Ub09bC6cKJsChP/uQeV4lOVLBG/AQqQ8dVP3M5JAAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDE4LTAxLTI2VDIwOjU5OjI2KzAxOjAwZhAWswAAACV0RVh0ZGF0ZTptb2RpZnkAMjAxOC0wMS0yNlQyMDo1OToyNiswMTowMBdNrg8AAAAZdEVYdFNvZnR3YXJlAHd3dy5pbmtzY2FwZS5vcmeb7jwaAAAAAElFTkSuQmCC\',
          ),
        ),
      ),
      \'field_image_block_link\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Group Explore\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'2a005dc6-72aa-4c8b-bf28-5ae064b65fb4\',
      \'vid\' => NULL,
      \'vuuid\' => \'73ab1cab-9e8a-4f35-8afa-61ab7a955988\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "discoverygarden inc.\\r\\n\\r\\nSims Office Suites Building | 3rd Floor\\r\\n\\r\\n118 Sydney Street, Charlottetown, PE\\r\\n\\r\\nPhone: 902.367.3851\\r\\n\\r\\nEmail: info@discoverygarden.ca\\r\\n\\r\\nWeb: discoverygarden.ca",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>discoverygarden inc.</p>\\n<p>Sims Office Suites Building | 3rd Floor</p>\\n<p>118 Sydney Street, Charlottetown, PE</p>\\n<p>Phone: 902.367.3851</p>\\n<p>Email: <a href=\\"mailto:info@discoverygarden.ca\\">info@discoverygarden.ca</a></p>\\n<p>Web: discoverygarden.ca</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/3\',
        \'alias\' => \'make-contact\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'vid\' => NULL,
      \'vuuid\' => \'1a184baf-0988-4fa7-b1f4-ac0b1a39b4c8\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_social_media_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://www.facebook.com/pages/DiscoveryGarden-Inc/503967859807350\',
            \'format\' => NULL,
            \'safe_value\' => \'https://www.facebook.com/pages/DiscoveryGarden-Inc/503967859807350\',
          ),
        ),
      ),
      \'field_social_media_link_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'facebook-logo-button.png\',
            \'uri\' => \'public://facebook-logo-button.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'834\',
            \'status\' => \'1\',
            \'timestamp\' => \'1524163373\',
            \'uuid\' => \'202b05ee-cec2-482b-9c52-1782af96b82d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'32\',
            \'height\' => \'32\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAJcEhZcwAADdcAAA3XAUIom3gAAAAHdElNRQfhCR0QCi6EsMmBAAACEElEQVRIx61VMWgTYRT+3u9PWrBFkIZwSAfRwUgd49ItQ8sRSgbBobjqUhNu0TgISUDBBLShTXF0yZohQyEiZDscii4ZsrhlOM44mXNIPX0OybV6+f/0mvot9/Pe+z7e9/7jfwQF9hYoTVkkyWADIIcd9LjFnfxoupbCgVpCFvEAywrdIRp+2XJnCJRi8QI/xRL08Kg6qJSOlQK1hGxiHWfD9u+d9nEisH+HDrEagQ4Afc7kuv8I1BLyKDIdAPp+atyFGHuXzXPRgVXZLMVOBOIFrff3/ARbZJKJT6HMerwwsVBLyC/qydPLnefBud7GZijt+TctVwCyqLm448XKTBtLsgjQ3oIYKH8b4MPjDQB4u/ZrGwL3cX2qYvg7LimtoQOfxx8/Tw81FcuUFpTVdcg8mURM74KyAkll5iOZ9G4i9JpMMoN+QkhKMliV+LrTDo65LrpA/ZWyA0OwgWi4prRpSI3/G3WLj3I2ABxs8G0iXlFXCnKUra1hl7YmYtvY5TeaITqCHVwA7Aj0tEmOoNAT3NLliM7mc0twB8O5HQy5I/IjNOYWaORHAvDL8Oaie34ZEIDlUnUePlUtF5AAMKisbE6/SXx1/xYA0BXlddiDCvC/HlXAcjmDfnQ6Z4LNIIJYruunYEei234q2ArApdN4+8fdxuWfSGHGAwKPXnx79Oz7X6MMV1xouQY4z3r/A7n2szdi5n6cAAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDE3LTA5LTI5VDE2OjEwOjQ2KzAyOjAweVNwawAAACV0RVh0ZGF0ZTptb2RpZnkAMjAxNy0wOS0yOVQxNjoxMDo0NiswMjowMAgOyNcAAAAZdEVYdFNvZnR3YXJlAHd3dy5pbmtzY2FwZS5vcmeb7jwaAAAAAElFTkSuQmCC\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Facebook\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'social_media\',
      \'uid\' => \'1\',
      \'uuid\' => \'37bae6df-0724-4d80-8424-c639df9af84a\',
      \'vid\' => NULL,
      \'vuuid\' => \'6b4f6cab-05c1-4362-a59c-fa5fa409209b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla eu ultricies tellus. Nam at magna nisl. Suspendisse ornare justo quis laoreet ultrices. Sed mollis erat in tellus ornare ornare. Curabitur nec risus porttitor, luctus odio vel, ultricies diam. Donec tempus lacinia sapien, id placerat nulla vehicula ut. Praesent sed efficitur massa.\\r\\n\\r\\nCurabitur pulvinar, sem sit amet tristique volutpat, mauris sapien congue erat, non imperdiet ipsum nunc eget ex. Suspendisse vel commodo eros, quis congue ex. Fusce gravida sollicitudin luctus. Sed placerat sollicitudin massa at hendrerit. Phasellus rutrum aliquet odio, eu pellentesque felis tempus quis. Quisque vitae hendrerit quam. Cras gravida eros mollis metus mattis semper. Pellentesque a feugiat risus. In et dolor laoreet sapien scelerisque tincidunt. Cras finibus euismod accumsan. Fusce orci ligula, rhoncus tempus luctus eu, egestas id orci. Donec rutrum vulputate ex id egestas. In semper risus sit amet sapien luctus porta. Donec porta neque accumsan metus interdum sodales.\\r\\n\\r\\nProin eu velit a dolor pulvinar euismod sed quis magna. Aliquam erat volutpat. Proin eu ex commodo, posuere ante non, iaculis erat. Sed eget neque in lectus dapibus scelerisque quis ac elit. Aenean viverra est ipsum, non congue metus blandit eu. Fusce sit amet erat purus. Integer quis urna vel sem efficitur consequat ac non justo. Maecenas tincidunt cursus justo eget maximus. Donec volutpat pulvinar consequat.\\r\\n\\r\\nCurabitur malesuada gravida ligula non hendrerit. Maecenas nisi lacus, efficitur vitae lacus at, bibendum imperdiet purus. Pellentesque nec blandit libero. Sed lacus urna, fringilla vitae ullamcorper ac, rhoncus non nisi. Maecenas maximus, mauris sed mollis luctus, leo mauris viverra arcu, non aliquam ante sapien at magna. Nullam at laoreet odio. Pellentesque vulputate pretium sem. Proin elementum orci sit amet viverra tempor. Etiam eu pulvinar diam, sed rutrum mauris. Nam varius mauris lorem, ac malesuada ante gravida ac. Ut arcu orci, tempor id mattis id, venenatis vel purus. Praesent aliquet eu nulla quis pulvinar. Proin id sem eget urna iaculis ultricies. Phasellus sit amet malesuada felis. Nulla tincidunt massa ut placerat tempus.\\r\\n\\r\\nPraesent iaculis, lectus ut tempus semper, mi leo pellentesque erat, non ornare dui sapien sed leo. Mauris aliquam nisl vel nibh aliquam, id aliquam nisl aliquet. Ut eu diam vitae nisi dapibus sollicitudin non non sem. Curabitur tincidunt hendrerit nisi sed consequat. Aenean vulputate ac quam id lobortis. Nullam et tincidunt tellus, sit amet sagittis nunc. Nullam mattis lorem sed lobortis blandit. Morbi sagittis molestie lorem, sed lobortis est elementum quis. Proin id tristique lorem. Fusce et porta purus. Praesent at libero a elit luctus accumsan. Aliquam cursus viverra est, eget pretium enim eleifend mattis. ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla eu ultricies tellus. Nam at magna nisl. Suspendisse ornare justo quis laoreet ultrices. Sed mollis erat in tellus ornare ornare. Curabitur nec risus porttitor, luctus odio vel, ultricies diam. Donec tempus lacinia sapien, id placerat nulla vehicula ut. Praesent sed efficitur massa.</p>\\n<p>Curabitur pulvinar, sem sit amet tristique volutpat, mauris sapien congue erat, non imperdiet ipsum nunc eget ex. Suspendisse vel commodo eros, quis congue ex. Fusce gravida sollicitudin luctus. Sed placerat sollicitudin massa at hendrerit. Phasellus rutrum aliquet odio, eu pellentesque felis tempus quis. Quisque vitae hendrerit quam. Cras gravida eros mollis metus mattis semper. Pellentesque a feugiat risus. In et dolor laoreet sapien scelerisque tincidunt. Cras finibus euismod accumsan. Fusce orci ligula, rhoncus tempus luctus eu, egestas id orci. Donec rutrum vulputate ex id egestas. In semper risus sit amet sapien luctus porta. Donec porta neque accumsan metus interdum sodales.</p>\\n<p>Proin eu velit a dolor pulvinar euismod sed quis magna. Aliquam erat volutpat. Proin eu ex commodo, posuere ante non, iaculis erat. Sed eget neque in lectus dapibus scelerisque quis ac elit. Aenean viverra est ipsum, non congue metus blandit eu. Fusce sit amet erat purus. Integer quis urna vel sem efficitur consequat ac non justo. Maecenas tincidunt cursus justo eget maximus. Donec volutpat pulvinar consequat.</p>\\n<p>Curabitur malesuada gravida ligula non hendrerit. Maecenas nisi lacus, efficitur vitae lacus at, bibendum imperdiet purus. Pellentesque nec blandit libero. Sed lacus urna, fringilla vitae ullamcorper ac, rhoncus non nisi. Maecenas maximus, mauris sed mollis luctus, leo mauris viverra arcu, non aliquam ante sapien at magna. Nullam at laoreet odio. Pellentesque vulputate pretium sem. Proin elementum orci sit amet viverra tempor. Etiam eu pulvinar diam, sed rutrum mauris. Nam varius mauris lorem, ac malesuada ante gravida ac. Ut arcu orci, tempor id mattis id, venenatis vel purus. Praesent aliquet eu nulla quis pulvinar. Proin id sem eget urna iaculis ultricies. Phasellus sit amet malesuada felis. Nulla tincidunt massa ut placerat tempus.</p>\\n<p>Praesent iaculis, lectus ut tempus semper, mi leo pellentesque erat, non ornare dui sapien sed leo. Mauris aliquam nisl vel nibh aliquam, id aliquam nisl aliquet. Ut eu diam vitae nisi dapibus sollicitudin non non sem. Curabitur tincidunt hendrerit nisi sed consequat. Aenean vulputate ac quam id lobortis. Nullam et tincidunt tellus, sit amet sagittis nunc. Nullam mattis lorem sed lobortis blandit. Morbi sagittis molestie lorem, sed lobortis est elementum quis. Proin id tristique lorem. Fusce et porta purus. Praesent at libero a elit luctus accumsan. Aliquam cursus viverra est, eget pretium enim eleifend mattis.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'About this site\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-header-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Our Organization\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'37e05a54-6e68-41e6-b3ab-330618485a71\',
      \'vid\' => NULL,
      \'vuuid\' => \'2e1f0347-1312-4f5a-84bc-470482c5ef87\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The Legislative Library of the Northwest Territories provides information and reference services to Members of the Legislative Assembly, their staff, and Government of the NWT employees. The Library\'s resources and facilities are also available for use by the public provided there is no conflict with service to core users.\\r\\n\\r\\nServices to the Public\\r\\nMembers of the public may visit the library and use the collection during regular daytime hours. Library materials may be borrowed through interlibrary loan, with some exceptions: reference books, legislative materials, and fragile texts may only be used in-house. Loans are for two weeks. Staff assistance to the public may be limited depending on the activities of the Legislative Assembly.\\r\\n</br>\\r\\n</br>\\r\\nContact Information\\r\\nLegislative Library\\r\\n(867) 767-9132 ext 12054\\r\\nFax: (867) 873-0207\\r\\n</br>\\r\\nLibrary Hours\\r\\nMonday to Friday\\r\\n8:30 am - 12 noon\\r\\n1:00 pm - 5:00 pm\\r\\n(except statutory holidays)\\r\\n\\r\\n</br>\\r\\n</br>\\r\\n</br>\\r\\n</br>\\r\\n</br>\\r\\n</br>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>The Legislative Library of the Northwest Territories provides information and reference services to Members of the Legislative Assembly, their staff, and Government of the NWT employees. The Library\'s resources and facilities are also available for use by the public provided there is no conflict with service to core users.</p>\\n<p>Services to the Public<br />\\nMembers of the public may visit the library and use the collection during regular daytime hours. Library materials may be borrowed through interlibrary loan, with some exceptions: reference books, legislative materials, and fragile texts may only be used in-house. Loans are for two weeks. Staff assistance to the public may be limited depending on the activities of the Legislative Assembly.<br /><br /><br />\\nContact Information<br />\\nLegislative Library<br />\\n(867) 767-9132 ext 12054<br />\\nFax: (867) 873-0207<br /><br />\\nLibrary Hours<br />\\nMonday to Friday<br />\\n8:30 am - 12 noon<br />\\n1:00 pm - 5:00 pm<br />\\n(except statutory holidays)</p>\\n<p><br /><br /><br /><br /><br /></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/6\',
        \'alias\' => \'menu-help\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Help\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'3bb51de9-a27f-4624-bd77-1eea14f478c1\',
      \'vid\' => NULL,
      \'vuuid\' => \'d2fd7282-937b-48e9-ae9d-754e3528f68d\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  \\r\\n\\r\\nThe platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. \\r\\n\\r\\nThe discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. \\r\\n\\r\\nThe discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations. \\r\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.\\r\\n\\r\\nHere is a list of the new features included in the discoverygarden platform: \\r\\n\\r\\n<ul>\\r\\n<li>Three standard theme options</li>\\r\\n<li>Rights management through our embargo module</li>\\r\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\r\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\r\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\r\\n<li>Citation Bookmarking and Batch Export</li>\\r\\n<li>Compliant with the Open Archives Initiative</li>\\r\\n<li>Able to integrate with Google Scholar</li>\\r\\n</ul>\\r\\n\\r\\ndiscoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: \\r\\n<ul>\\r\\n<li>Consulting services </li>\\r\\n<li>Custom website theme</li>\\r\\n<li>Advanced training</li>\\r\\n<li>Data migration </li>\\r\\n<li>Metadata mapping</li>\\r\\n</ul>\\r\\n\\r\\nContact us today to get your own hosted discoverygarden platform. \\r\\n \\r\\n\\r\\n ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  </p>\\n<p>The platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. </p>\\n<p>The discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. </p>\\n<p>The discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations.<br />\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.</p>\\n<p>Here is a list of the new features included in the discoverygarden platform: </p>\\n<ul><li>Three standard theme options</li>\\n<li>Rights management through our embargo module</li>\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\n<li>Citation Bookmarking and Batch Export</li>\\n<li>Compliant with the Open Archives Initiative</li>\\n<li>Able to integrate with Google Scholar</li>\\n</ul><p>discoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: </p>\\n<ul><li>Consulting services </li>\\n<li>Custom website theme</li>\\n<li>Advanced training</li>\\n<li>Data migration </li>\\n<li>Metadata mapping</li>\\n</ul><p>Contact us today to get your own hosted discoverygarden platform.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/7\',
        \'alias\' => \'about\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'About\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'3dfbfeaf-cb77-4ac0-b16f-145af17649b5\',
      \'vid\' => NULL,
      \'vuuid\' => \'97667383-3f6c-4db7-a93c-c5112ae72e99\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'At a glance, quickly learn how your repository is being used. See the total number of objects in your digital repository, new objects added, objects viewed and more. Reach out to us to learn more about additional usage statistics available.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>At a glance, quickly learn how your repository is being used. See the total number of objects in your digital repository, new objects added, objects viewed and more. Reach out to us to learn more about additional usage statistics available.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'line-graph.png\',
            \'uri\' => \'public://line-graph.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'967\',
            \'status\' => \'1\',
            \'timestamp\' => \'1524163373\',
            \'uuid\' => \'4a6b64f7-ee4f-4b43-8a82-b9fbbadcbf48\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'32\',
            \'height\' => \'32\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAJcEhZcwAADdcAAA3XAUIom3gAAAAHdElNRQfiARoUOi8Ay2buAAAClUlEQVRIx6XVS2hUZxQH8F/GBxrzmLoRwQoFhUZDWypqarupEBy6qKC0iKDgA6zYVhCL9QEpiE0puCrV1sZqWihdFMSN0oCCoC4UxEVE0GTKxJpAg6apj8Q4metibq+5uTOToOduzvnO//+/537n+86FeY56KcsYLptrML8yOVUx26ZTty9ftILXFCy1wYAZ5clTKwgPeqrZfH9HL2i01R1HDE2ugjr98gL7w7jeQx16tWvSpMkyVZUFfpJV45iLYbzWoJQdguhphjNGjHorQW9WsBJLBBpAtX906PW9tLS0uiJwof0CXf+HodXK+SH0rzkcepd0+szMZBeeyvojtnZUj9rQ367fdDQKvFOujUsM2xmtrFSQiaJ6j3yMI66VbldxE7cbsRzMknUihjipQ50HtlQS4Dc5s/GdXukY4l0Fh91Pfn1coMZNvXoUrE5gbgiirYxZSkO0MQ91yTmuyl8J3C9oK/3+s0aig3TdbtX+K1HB7wJrlbHnJ3GbvHtuJ27IXCN6nJ1YgAVWm5ZAtMj6wOi42fCng0mBUjbVXV9IyWmJre8xb3ICH3lsNlrkwgE0Q1vxIk1O4ILj4FWjMpipQ58FpQRecdA5m2L0RoG3Q/+8Ht84p8/rzwGr/BwJHNKlVd7SKDvLCZdDv96/fnXLg7F0ftQdCVzRijsGnPK5N+z2RKA1zK4xKOVTt8u1cYrL8rLu2+GknEBgl136wqFabcB1g/FejD0yxzT4RJ3TusFiV/WjJkQ9tshGnckDVazga0PeG5fZZ8gje0xgGcN2yvuwRC6tfiI6GQWjNk8MLGVVeN95eXdfiH+p+GtYF02gOb5ywL0IsMqbvh1D2CKvfUzcOV6xVntscK2wN5bfaH2c8AykR82Af0ycvAAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAxOC0wMS0yNlQyMDo1ODo0NyswMTowMOnKf74AAAAldEVYdGRhdGU6bW9kaWZ5ADIwMTgtMDEtMjZUMjA6NTg6NDcrMDE6MDCYl8cCAAAAGXRFWHRTb2Z0d2FyZQB3d3cuaW5rc2NhcGUub3Jnm+48GgAAAABJRU5ErkJggg==\',
          ),
        ),
      ),
      \'field_image_block_link\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'At a glance\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'50347416-1888-4ba9-ac43-f9c2e8945d3b\',
      \'vid\' => NULL,
      \'vuuid\' => \'68a3fe34-f5e8-499d-b469-74b02473816b\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Search the Repo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'vid\' => NULL,
      \'vuuid\' => \'f436b187-2bf5-4484-bb57-b79dee365a0e\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_social_media_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://www.youtube.com/\',
            \'format\' => NULL,
            \'safe_value\' => \'https://www.youtube.com/\',
          ),
        ),
      ),
      \'field_social_media_link_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'youtube-logotype.png\',
            \'uri\' => \'public://youtube-logotype.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1132\',
            \'status\' => \'1\',
            \'timestamp\' => \'1524163373\',
            \'uuid\' => \'2b254c5e-2d50-4828-bbb4-59b6a71c169d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'32\',
            \'height\' => \'32\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAJcEhZcwAADdcAAA3XAUIom3gAAAAHdElNRQfhCR0QDgFLDTHcAAADOklEQVRIx62VUWhbZRTHf+dLsjQ3jla61WZW1zFlrCAKEot7Wag+dFOovohYOpg6CssaURAfrAWrfRm4QttYqg95GH3wRVqRPWmdvkgslUEfCpug2EIqbR1b7E3bJPf4sDS5t03ihJ2n757zP//vnP/33fMJVWwsKF3Sw0mJaAQkoxmWdFbnEtv7sbLXMRUpDGkvB6vwZmXaP9yfqUOQarAH9V0sapsto9an57eqEiRbdYZO/tvS8kp8dR/B+FNyjbb7SAdY0bMDi/eWZnd3V/pPchmY1q9rErTJtWSriyDVoDOu3Q+vfUjWfCJOnRradCbVUCawBz29n2zp0KuFP+jmFx3lLstyWTMysoei0x4saTAVyf/mVV6G+JJn9Iv19kNRPS4J3+vFGenWPQeIHXiiP2OgMLT34PTl+Co9Ot/8PJ858zXbsApDYMaC2rsvFAU6TZ4A/gP52kJo71jQSFeVWyegxgmYHfI7gTpSHpQuIz21ohK9+LO8Z6IED2zIcA1Mj+/s+xzdHzgjEuPI/BltlI84UmikjwinqjDYkrypT3r6+pGr5o7k1Fbb5NQGsZyQWGJpyGmkT057KrglE1kecqcPxKhr49c9FP/4vWEzNX5F3gQoRt+5BTDxOYuXJt0I9dRgxHM9dF2vyMdqS0z+LLksgl6Ep4WMXzO4NdhIrIz/LjvxGxOp5A96ShYUupPn9G2z6UxK0VwobnjoMoYlt8P3d3n5sGNJk4aBtHNXXnLe4C/NFV7DQ8CS0Vn3d36zim63zQ0N8zjHedQcc2xPBbN+nZNs5S5qE2s15Bd+5dvisja5fFmdM4ltma54As1lvBpDM4D4OKpbrIK8aN6qIECmE9t+8A/nz5X/x0r4pg5QBNBX6dCk77bzFQ59HCojbP8wGOjPyOiuz2mHjW+cExD/YP3pwHPOZOBCy+nAI4nvLi60nFjruJR22sv7j/ZnSkM11bB5vTSTlp1nE7VUAMYOmwUeAyAdjp3fKk/lZKvOl6Ziju+5Qw5bbSn9CxoSC4sQjbxACIAVid4b7Q9qrMPAokRJ31d6WqK76S4CiK+GYzKCXTfZlpFwrPIuPejHtaz1/3je/wWdWECQweWNPAAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAxNy0wOS0yOVQxNjoxNDowMSswMjowMDFV4GUAAAAldEVYdGRhdGU6bW9kaWZ5ADIwMTctMDktMjlUMTY6MTQ6MDErMDI6MDBACFjZAAAAGXRFWHRTb2Z0d2FyZQB3d3cuaW5rc2NhcGUub3Jnm+48GgAAAABJRU5ErkJggg==\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'YouTube\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'social_media\',
      \'uid\' => \'1\',
      \'uuid\' => \'70e5e6c2-44ed-4ffc-a188-d17eaa6d240c\',
      \'vid\' => NULL,
      \'vuuid\' => \'21eda961-2255-4345-bfe8-45ec275aa875\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Welcome to our Sandbox. \\r\\n\\r\\nThis site is managed by discoverygarden inc. We are proud to be a founding member and strong supporter of the Islandora Community. \\r\\n\\r\\nWe are staffed daily (Monday through Friday ) from 8AM to 6PM. (Atlantic Time)\\r\\n\\r\\nThe best way to reach us is by email at  info@discoverygarden.ca \\r\\n\\r\\nThis sandbox has been configured so any changes you make are reverted back to its original state each night at midnight (AST).  This gives everyone a fresh start each day. So don\'t worry about breaking it since the changes won\'t be permanent. \\r\\n\\r\\nIf you would like to get access to a site that doesn\'t revert back each night, contact sales@discoverygarden.ca to see if a demo box would be the best fit for you. \\r\\n\\r\\nWe would also like to remind you that this is just one way that the Islandora Open Source Digital Asset Management software can be configured. One of the best things about Islandora is how flexible it is and how it can also be integrated in many other systems. Again if you would like to know more about Islandora feel free to email sales@discoverygarden.ca \\r\\n\\r\\n \\r\\n\\r\\n</br>\\r\\n</br>\\r\\n</br>\\r\\n</br>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Welcome to our Sandbox. </p>\\n<p>This site is managed by discoverygarden inc. We are proud to be a founding member and strong supporter of the Islandora Community. </p>\\n<p>We are staffed daily (Monday through Friday ) from 8AM to 6PM. (Atlantic Time)</p>\\n<p>The best way to reach us is by email at  <a href=\\"mailto:info@discoverygarden.ca\\">info@discoverygarden.ca</a> </p>\\n<p>This sandbox has been configured so any changes you make are reverted back to its original state each night at midnight (AST).  This gives everyone a fresh start each day. So don\'t worry about breaking it since the changes won\'t be permanent. </p>\\n<p>If you would like to get access to a site that doesn\'t revert back each night, contact <a href=\\"mailto:sales@discoverygarden.ca\\">sales@discoverygarden.ca</a> to see if a demo box would be the best fit for you. </p>\\n<p>We would also like to remind you that this is just one way that the Islandora Open Source Digital Asset Management software can be configured. One of the best things about Islandora is how flexible it is and how it can also be integrated in many other systems. Again if you would like to know more about Islandora feel free to email <a href=\\"mailto:sales@discoverygarden.ca\\">sales@discoverygarden.ca</a> </p>\\n<p><br /><br /><br /></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/11\',
        \'alias\' => \'ask-us\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Ask Us\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'7a2de4ee-072d-4a47-bc21-feabb7e6e934\',
      \'vid\' => NULL,
      \'vuuid\' => \'98521034-5a74-4f8d-a4e5-8678491e66ea\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'discoverygarden_logo.png\',
            \'uri\' => \'public://discoverygarden_logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'21700\',
            \'status\' => \'1\',
            \'timestamp\' => \'1524163373\',
            \'uuid\' => \'55a31bca-a47c-41b1-a9bc-ba486da2bacf\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1200\',
            \'height\' => \'283\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAABdwAAAH0CAYAAAAnhe8sAAABS2lUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4KPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS42LWMxNDAgNzkuMTYwNDUxLCAyMDE3LzA1LzA2LTAxOjA4OjIxICAgICAgICAiPgogPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4KICA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIi8+CiA8L3JkZjpSREY+CjwveDp4bXBtZXRhPgo8P3hwYWNrZXQgZW5kPSJyIj8+LUNEtwAAIABJREFUeJzs3Xn8fdW8+PFX3+aBkAwNSorIdHUVGa8Urn1dtpBN+iZjynRD5briRhlycQkVleoYyjEdLteUWTJlpqIkJVylef798T7fX1+fvsPns9bae59zPq/n4/F5IJ+19mp/1tnnvd977fcCSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIkSZIk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\',
          ),
        ),
      ),
      \'field_image_block_link\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Footer Logo\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'847549c5-2502-4938-8fbb-4ea35e2f4815\',
      \'vid\' => NULL,
      \'vuuid\' => \'4e58a48a-6a98-404f-8faa-b86676447c44\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_social_media_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://twitter.com/?lang=en\',
            \'format\' => NULL,
            \'safe_value\' => \'https://twitter.com/?lang=en\',
          ),
        ),
      ),
      \'field_social_media_link_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'twitter-logo-button.png\',
            \'uri\' => \'public://twitter-logo-button.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'960\',
            \'status\' => \'1\',
            \'timestamp\' => \'1524163373\',
            \'uuid\' => \'6d9df87e-c85f-4590-9442-2a762035ea52\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'32\',
            \'height\' => \'32\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAQAAADZc7J/AAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QAAKqNIzIAAAAJcEhZcwAADdcAAA3XAUIom3gAAAAHdElNRQfhCR0QDB70M16rAAACjklEQVRIx6VVPWhTURT+zs1rIvYH/9L0IcHBKra04BIdgkKDW4YMUgUt6KKl5McUxLglQh3iIKFJqIJDixlEqJDBUpeA0uDgoBC1IKUORZI07WCTDLHPXoc27y8vMaVnevc75/vuOeedey/BwKYt5CIPBkjkIkB5nscyT/NMoNYYS3ogZhPCGEO3gW4ZKelRsNhCIGK2hvgDdKG5VehJKRr5YygQswnzcOL/lpWuKnnIAvFhegt7G3QAWONuf04jELMJn9qmA8Ca5NjNgu3WLszviw7YhfmIWRawhtqqXWtOa2ivhJhNWGnZeaCAVQziiA6tSP3BIgOEsIa+oAvbohs+0ef0HsM9vCM/CrKnSwgDNG1hJdXYVDuOSjf5M1hk5LZvrv752rT+lAb5FdlX3rEycmmmrjC+7Z3FiLxPeeOl4rz2F0k+rIruJhcjjybh08k+wPdxe4BG8Rwr+BnZUbvpFWyatYcS73FZhdT4m80xhTTTO7GuOCPsRBmHNRt+YCRqgBrui6qS1HTg+FkdHSQyrhXogXP8d7O/Sef1CBeZHmKP402Hil9qxBjldUFnaHJmyIgeP0d3GnLKM57Xg/zQxFcjARZHR0NsnmG5QdWdmE1cbNj/umqAFFtmPG0A36LJZJ8aSHhpziAOPC3wDJVVs5jDEn3HkveLEjTdY3rBRw27WuYZFqghpYKGYMc34Ud9mbQnguxzEzqQCtSMjzPHL6xSNz+JXjS3itQfLJqAxapbwIi2j+jBKYjobEEHTQUW9m6kUhRZ7NeypejuXgAOfKkCwSJ3Y619OnfXXwb5LPhzkqPNQrKSo/4qACYFX6xeSHVuwwFzC3KFpjbuPtxStVIfcaDHtW77ed7/AU0+2wp83dOCAAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDE3LTA5LTI5VDE2OjEyOjMwKzAyOjAwFLOcdQAAACV0RVh0ZGF0ZTptb2RpZnkAMjAxNy0wOS0yOVQxNjoxMjozMCswMjowMGXuJMkAAAAZdEVYdFNvZnR3YXJlAHd3dy5pbmtzY2FwZS5vcmeb7jwaAAAAAElFTkSuQmCC\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Twitter\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'social_media\',
      \'uid\' => \'1\',
      \'uuid\' => \'89d350d0-a015-4c03-8afe-77df12390e76\',
      \'vid\' => NULL,
      \'vuuid\' => \'4f0f1a49-49cd-45ee-8bee-32004c375340\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla eu ultricies tellus. Nam at magna nisl. Suspendisse ornare justo quis laoreet ultrices. Sed mollis erat in tellus ornare ornare. Curabitur nec risus porttitor, luctus odio vel, ultricies diam. Donec tempus lacinia sapien, id placerat nulla vehicula ut. Praesent sed efficitur massa.\\r\\n\\r\\nCurabitur pulvinar, sem sit amet tristique volutpat, mauris sapien congue erat, non imperdiet ipsum nunc eget ex. Suspendisse vel commodo eros, quis congue ex. Fusce gravida sollicitudin luctus. Sed placerat sollicitudin massa at hendrerit. Phasellus rutrum aliquet odio, eu pellentesque felis tempus quis. Quisque vitae hendrerit quam. Cras gravida eros mollis metus mattis semper. Pellentesque a feugiat risus. In et dolor laoreet sapien scelerisque tincidunt. Cras finibus euismod accumsan. Fusce orci ligula, rhoncus tempus luctus eu, egestas id orci. Donec rutrum vulputate ex id egestas. In semper risus sit amet sapien luctus porta. Donec porta neque accumsan metus interdum sodales.\\r\\n\\r\\nProin eu velit a dolor pulvinar euismod sed quis magna. Aliquam erat volutpat. Proin eu ex commodo, posuere ante non, iaculis erat. Sed eget neque in lectus dapibus scelerisque quis ac elit. Aenean viverra est ipsum, non congue metus blandit eu. Fusce sit amet erat purus. Integer quis urna vel sem efficitur consequat ac non justo. Maecenas tincidunt cursus justo eget maximus. Donec volutpat pulvinar consequat.\\r\\n\\r\\nCurabitur malesuada gravida ligula non hendrerit. Maecenas nisi lacus, efficitur vitae lacus at, bibendum imperdiet purus. Pellentesque nec blandit libero. Sed lacus urna, fringilla vitae ullamcorper ac, rhoncus non nisi. Maecenas maximus, mauris sed mollis luctus, leo mauris viverra arcu, non aliquam ante sapien at magna. Nullam at laoreet odio. Pellentesque vulputate pretium sem. Proin elementum orci sit amet viverra tempor. Etiam eu pulvinar diam, sed rutrum mauris. Nam varius mauris lorem, ac malesuada ante gravida ac. Ut arcu orci, tempor id mattis id, venenatis vel purus. Praesent aliquet eu nulla quis pulvinar. Proin id sem eget urna iaculis ultricies. Phasellus sit amet malesuada felis. Nulla tincidunt massa ut placerat tempus.\\r\\n\\r\\nPraesent iaculis, lectus ut tempus semper, mi leo pellentesque erat, non ornare dui sapien sed leo. Mauris aliquam nisl vel nibh aliquam, id aliquam nisl aliquet. Ut eu diam vitae nisi dapibus sollicitudin non non sem. Curabitur tincidunt hendrerit nisi sed consequat. Aenean vulputate ac quam id lobortis. Nullam et tincidunt tellus, sit amet sagittis nunc. Nullam mattis lorem sed lobortis blandit. Morbi sagittis molestie lorem, sed lobortis est elementum quis. Proin id tristique lorem. Fusce et porta purus. Praesent at libero a elit luctus accumsan. Aliquam cursus viverra est, eget pretium enim eleifend mattis. ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla eu ultricies tellus. Nam at magna nisl. Suspendisse ornare justo quis laoreet ultrices. Sed mollis erat in tellus ornare ornare. Curabitur nec risus porttitor, luctus odio vel, ultricies diam. Donec tempus lacinia sapien, id placerat nulla vehicula ut. Praesent sed efficitur massa.</p>\\n<p>Curabitur pulvinar, sem sit amet tristique volutpat, mauris sapien congue erat, non imperdiet ipsum nunc eget ex. Suspendisse vel commodo eros, quis congue ex. Fusce gravida sollicitudin luctus. Sed placerat sollicitudin massa at hendrerit. Phasellus rutrum aliquet odio, eu pellentesque felis tempus quis. Quisque vitae hendrerit quam. Cras gravida eros mollis metus mattis semper. Pellentesque a feugiat risus. In et dolor laoreet sapien scelerisque tincidunt. Cras finibus euismod accumsan. Fusce orci ligula, rhoncus tempus luctus eu, egestas id orci. Donec rutrum vulputate ex id egestas. In semper risus sit amet sapien luctus porta. Donec porta neque accumsan metus interdum sodales.</p>\\n<p>Proin eu velit a dolor pulvinar euismod sed quis magna. Aliquam erat volutpat. Proin eu ex commodo, posuere ante non, iaculis erat. Sed eget neque in lectus dapibus scelerisque quis ac elit. Aenean viverra est ipsum, non congue metus blandit eu. Fusce sit amet erat purus. Integer quis urna vel sem efficitur consequat ac non justo. Maecenas tincidunt cursus justo eget maximus. Donec volutpat pulvinar consequat.</p>\\n<p>Curabitur malesuada gravida ligula non hendrerit. Maecenas nisi lacus, efficitur vitae lacus at, bibendum imperdiet purus. Pellentesque nec blandit libero. Sed lacus urna, fringilla vitae ullamcorper ac, rhoncus non nisi. Maecenas maximus, mauris sed mollis luctus, leo mauris viverra arcu, non aliquam ante sapien at magna. Nullam at laoreet odio. Pellentesque vulputate pretium sem. Proin elementum orci sit amet viverra tempor. Etiam eu pulvinar diam, sed rutrum mauris. Nam varius mauris lorem, ac malesuada ante gravida ac. Ut arcu orci, tempor id mattis id, venenatis vel purus. Praesent aliquet eu nulla quis pulvinar. Proin id sem eget urna iaculis ultricies. Phasellus sit amet malesuada felis. Nulla tincidunt massa ut placerat tempus.</p>\\n<p>Praesent iaculis, lectus ut tempus semper, mi leo pellentesque erat, non ornare dui sapien sed leo. Mauris aliquam nisl vel nibh aliquam, id aliquam nisl aliquet. Ut eu diam vitae nisi dapibus sollicitudin non non sem. Curabitur tincidunt hendrerit nisi sed consequat. Aenean vulputate ac quam id lobortis. Nullam et tincidunt tellus, sit amet sagittis nunc. Nullam mattis lorem sed lobortis blandit. Morbi sagittis molestie lorem, sed lobortis est elementum quis. Proin id tristique lorem. Fusce et porta purus. Praesent at libero a elit luctus accumsan. Aliquam cursus viverra est, eget pretium enim eleifend mattis.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Website Feedback\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'98395de0-49a4-4c32-9395-dcd7071561cc\',
      \'vid\' => NULL,
      \'vuuid\' => \'58de5f2f-08f5-45dd-803b-dc5454960679\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div class=\\"welcome-body-message\\">\\r\\n<span class=\\"welcome-title\\"><h2>Welcome to <span class=\\"welcome-italic\\">your</span> Digital Archive</h2></span>\\r\\n<span class=\\"message\\">Islandora is an open source digital repository system based on Fedora Commons, Drupal and a host of additional applications. Begin exploring below, or browse repository in the above menu. You can login using the username \\"admin\\" and password \\"islandora\\" in the menu below.</span>\\r\\n</div>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<div class=\\"welcome-body-message\\">\\n<span class=\\"welcome-title\\"><br /><h2>Welcome to <span class=\\"welcome-italic\\">your</span> Digital Archive</h2>\\n<p></p></span><br /><span class=\\"message\\">Islandora is an open source digital repository system based on Fedora Commons, Drupal and a host of additional applications. Begin exploring below, or browse repository in the above menu. You can login using the username \\"admin\\" and password \\"islandora\\" in the menu below.</span>\\n</div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(),
      \'field_image_block_link\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Welcome content\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'9c8f491e-d901-4fc8-9b5d-75490185bdd6\',
      \'vid\' => NULL,
      \'vuuid\' => \'eaea4d5c-8206-482e-a95d-24975b39a4b6\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Email Signup\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'a477fee5-fbec-4661-b911-4ee84123af0c\',
      \'vid\' => NULL,
      \'vuuid\' => \'25121619-0353-4d3d-8875-424a8df8ff2b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "1125 Colonel By Drive\\r\\nOttawa, Ontario\\r\\nK1S 5B6 Canada\\r\\nPhone: 613-520-2600\\r\\next. 2733",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>1125 Colonel By Drive<br />\\nOttawa, Ontario<br />\\nK1S 5B6 Canada<br />\\nPhone: 613-520-2600<br />\\next. 2733</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image_block\' => array(),
      \'field_image_block_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'/\',
            \'format\' => NULL,
            \'safe_value\' => \'/\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'MacOdrum Library Digital Collections\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'a6c8f7b4-679c-4cc1-9f7d-bf39d005ae34\',
      \'vid\' => NULL,
      \'vuuid\' => \'70c19e6a-a8de-491e-a8c5-364601b3c652\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Terms Of Use\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'b7fa5f34-ae36-4ac5-adb1-757c65813f4a\',
      \'vid\' => NULL,
      \'vuuid\' => \'bdf78ee7-3d2d-44d7-a999-212557257c95\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/19\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Islandora Advanced Search\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f\',
      \'vid\' => NULL,
      \'vuuid\' => \'e6b92772-5ec2-418b-9e9a-577156def660\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "This site was made possible by support from The Andrew W. Mellon Foundation\\r\\nDesigned in collaboration with Jell Creative | Thank you to all of our contributors",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>This site was made possible by support from The Andrew W. Mellon Foundation<br />\\nDesigned in collaboration with Jell Creative | Thank you to all of our contributors</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Basic Info\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'fdf0c76a-1260-46bc-94a4-414aff3bc079\',
      \'vid\' => NULL,
      \'vuuid\' => \'70498e2b-6518-40f7-9686-b8c6e199c75e\',
    ),
)',
);
  return $node_export;
}
