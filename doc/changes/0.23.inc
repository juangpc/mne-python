.. _changes_0_23_0:

Version 0.23.0 (2021-04-27)
---------------------------

.. |Jack Zhang| replace:: **Jack Zhang**

.. |Sumalyo Datta| replace:: **Sumalyo Datta**

.. |Anna Padee| replace:: **Anna Padee**

.. |Richard Koehler| replace:: **Richard Koehler**

.. |Zhi Zhang| replace:: **Zhi Zhang**

.. |Rotem Falach| replace:: **Rotem Falach**

.. |Andres Rodriguez| replace:: **Andres Rodriguez**

.. |Matt Sanderson| replace:: **Matt Sanderson**

.. |Enrico Varano| replace:: **Enrico Varano**

.. |Dominik Welke| replace:: **Dominik Welke**

.. |Judy D Zhu| replace:: **Judy D Zhu**

.. |Valerii Chirkov| replace:: **Valerii Chirkov**

.. |Matteo Anelli| replace:: **Matteo Anelli**

.. |Apoorva Karekal| replace:: **Apoorva Karekal**

.. |Cora Kim| replace:: **Cora Kim**

.. |Silvia Cotroneo| replace:: **Silvia Cotroneo**

.. |Ram Pari| replace:: **Ram Pari**

.. |Erica Peterson| replace:: **Erica Peterson**

.. |Maggie Clarke| replace:: **Maggie Clarke**

.. |Felix Klotzsche| replace:: **Felix Klotzsche**

Enhancements
~~~~~~~~~~~~
- Add support for exporting to EEGLAB's set format with :mod:`eeglabio` with new methods :meth:`mne.io.Raw.export` and :meth:`mne.Epochs.export`. (:gh:`9192` **by new contributor** |Jack Zhang|_)

- :func:`mne.viz.plot_evoked_topo` now uses a Minimum/Maximum of peaks for each channel type to calculate ylim when input param is None (:gh:`9285` **by new contributor** |Ram Pari|_)

- Add exclude parameter to :func:`mne.viz.plot_evoked_topo` (:gh:`9278` **by new contributor** |Ram Pari|_)

- Add :meth:`mne.time_frequency.EpochsTFR.to_data_frame` and :meth:`mne.time_frequency.AverageTFR.to_data_frame` methods (:gh:`9124` **by new contributor** |Felix Klotzsche|_)

- Add ``selection`` and ``drop_log`` to :class:`mne.time_frequency.EpochsTFR` (:gh:`9124` **by new contributor** |Felix Klotzsche|_)

- Add CSV, TSV, and XYZ support to :func:`mne.channels.read_custom_montage` (:gh:`9203` **by new contributor** |Jack Zhang|_)

- Add HTML representation for `~mne.Epochs` in Jupyter Notebooks (:gh:`9174` **by new contributor** |Valerii Chirkov|_)

- Speed up :func:`mne.viz.plot_ica_properties` by refactoring (:gh:`9174` **by new contributor** |Valerii Chirkov|_)

- Add ``apply_function`` method to epochs and evoked objects (:gh:`9088` **by new contributor** |Erica Peterson|_ and `Victoria Peterson`_)

- New tutorial for function :func:`mne.make_fixed_length_epochs` (:gh:`9156` **by new contributor** |Erica Peterson|_)

- Add different colors for each volume source space in :func:`mne.viz.plot_alignment` (:gh:`9043` **by new contributor** |Valerii Chirkov|_)

- Add ``overlap`` parameter to :func:`mne.make_fixed_length_epochs` to allow creating overlapping fixed length epochs (:gh:`9096` **by new contributor** |Silvia Cotroneo|_)

- Add :meth:`mne.Dipole.to_mni` for more convenient  dipole.pos to MNI conversion (:gh:`9043` **by new contributor** |Valerii Chirkov|_)

- Update citations in maxwell.py (:gh:`9043` **by new contributor** |Valerii Chirkov|_)

- New Tutorial for analyzing frequency-tagging data (:gh:`8867` **by new contributor** |Dominik Welke|_ and `kalenkovich`_)

- Add dbs as new channel type for deep brain stimulation (DBS) recordings (:gh:`8739` **by new contributor** |Richard Koehler|_)

- Add some preprocessing functions to the EEGLAB migration guide (:gh:`9169` **by new contributor** |Apoorva Karekal|_)

- Add :func:`mne.chpi.extract_chpi_locs_kit` to read cHPI coil locations from KIT/Yokogawa data (:gh:`8813` **by new contributor** |Matt Sanderson|_, `Robert Seymour`_, and `Eric Larson`_)

- Add ``match_alias`` parameter to :meth:`mne.io.Raw.set_montage` and related functions to match unrecognized channel location names to known aliases (:gh:`8799` **by new contributor** |Zhi Zhang|_)

- Update the ``notebook`` 3d backend to use ``ipyvtk_simple`` for a better integration within ``Jupyter`` (:gh:`8503` by `Guillaume Favelier`_)

- Remove the 15-character limitation for channel names when writing to FIF format. If you need the old 15-character names, you can use something like ``raw.rename_channels({n: n[:13] for n in raw.ch_names}, allow_duplicates=True)``, by `Eric Larson`_ (:gh:`8346`)

- Add channel-specific annotation support to :class:`mne.Annotations` via ``ch_names`` parameter (:gh:`8896` by `Eric Larson`_)

- Add toggle-all button to :class:`mne.Report` HTML and ``width`` argument to ``mne.Report.add_bem_to_section`` (:gh:`8723` by `Eric Larson`_)

- Add infant template MRI dataset downloader :func:`mne.datasets.fetch_infant_template` (:gh:`8738` by `Eric Larson`_ and `Christian O'Reilly`_)

- Add digitizer information to :func:`mne.io.read_raw_egi` (:gh:`8789` by `Christian Brodbeck`_)

- Add support for reading some incomplete raw FIF files in :func:`mne.io.read_raw_fif` (:gh:`9268` by `Eric Larson`_)

- Allow reading digitization from files other than ``*.fif`` in the coregistration GUI (:gh:`8790` by `Christian Brodbeck`_)

- Speed up :func:`mne.inverse_sparse.tf_mixed_norm` using STFT/ISTFT linearity (:gh:`8697` by `Eric Larson`_)

- Reduce memory consumption of `mne.io.Raw` and speed up epoching when thousands of events are present for `mne.Epochs` (:gh:`8801` by `Eric Larson`_)

- Speed up ``import mne`` by reducing function creation overhead (:gh:`8829` by `Eric Larson`_)

- `mne.Report.parse_folder` now processes supported non-FIFF files by default, too (:gh:`8744` by `Richard Höchenberger`_)

- `mne.Report` has gained the new methods `~mne.Report.add_custom_js` and `~mne.Report.add_custom_css` for adding user-defined JavaScript and styles (:gh:`8762`, :gh:`9037` by `Richard Höchenberger`_)

- Add option to control appearance of opaque inside surface of the head to :ref:`mne coreg` (:gh:`8793` by `Eric Larson`_)

- Add option to disable projection using ``--projoff`` in :ref:`mne browse_raw` (:gh:`9262` by `Eric Larson`_)

- Add keypress to toggle projection using ``shift+j`` in :meth:`mne.io.Raw.plot` and :ref:`mne browse_raw` (:gh:`9262` by `Eric Larson`_)

- Add support for non-FIF files in :ref:`mne browse_raw` using :func:`mne.io.read_raw` (:gh:`8806` by `Eric Larson`_)

- Add :func:`mne.io.read_raw_nedf` for reading StarStim / enobio NEDF files (:gh:`8734` by `Tristan Stenner`_)

- Add :meth:`raw.describe() <mne.io.Raw.describe>` to display (or return) descriptive statistics for each channel (:gh:`8760` by `Clemens Brunner`_)

- Add :meth:`annotations.to_data_frame() <mne.Annotations.to_data_frame>` to return annotations as a pandas dataframe (:gh:`8783` by `Robert Luke`_)

- Add :func:`mne.preprocessing.compute_maxwell_basis` to compute the SSS basis function (:gh:`8822` by `Eric Larson`_)

- Add the ``silhouette`` parameter to :class:`mne.viz.Brain` to display sharp edges and improve perception (:gh:`8771` by `Guillaume Favelier`_)

- Add warning to :func:`mne.cov.compute_whitener` when an explicit ``rank`` parameter leads to a large increase in condition number (:gh:`8805` by `Eric Larson`_)

- Add parameter ``align=True`` to `mne.viz.Brain.show_view` to make views relative to the closest canonical (MNI) axes rather than the native MRI surface RAS coordinates (:gh:`8794` by `Eric Larson`_)

- Add ``auto_close`` to ``mne.Report.add_figs_to_section`` and ``mne.Report.add_slider_to_section`` to manage closing figures (:gh:`8730` by `Guillaume Favelier`_)

- Add :func:`mne.write_head_bem` to support writing head surface files (:gh:`8841` by `Yu-Han Luo`_)

- The signal of ``resp`` (respiratory) channels is now assumed to be in the unit Volt (:gh:`8858` by `Richard Höchenberger`_)

- Static type checkers like Pylance (comes with VS Code) now display the parameters of many more functions correctly, largely improving overall usability for VS Code users (:gh:`8862` by `Richard Höchenberger`_)

- Support new EEGLAB file format (:gh:`8874` by `Clemens Brunner`_)

- Reading and writing FIFF files whose filenames end with ``_meg.fif.gz``, ``_eeg.fif(.gz)``, and ``_ieeg.fif(.gz)`` doesn't emit a warning anymore; this improves interobaility with BIDS-formatted datasets (:gh:`8868` by `Richard Höchenberger`_)

- On macOS, we now set the environment variable ``QT_MAC_WANTS_LAYER`` to ``"1"`` if it hasn't been set explicitly by the user, in order to ensure that `~mne.SourceEstimate` plots work on macOS 11 with older versions of Qt and PyQt (:gh:`8959` by `Richard Höchenberger`_)

- :func:`mne.time_frequency.EpochsTFR.average` now allows different ways of averaging, such as "median", or callable functions (:gh:`8879` by `Adam Li`_)

- `~mne.Epochs` metadata can now be generated automatically from events using `mne.epochs.make_metadata` (:gh:`8834` by `Richard Höchenberger`_)

- Interactions with sliders in `mne.Report` will now continuously update the linked content (it was updated only on mouse button release before) (:gh:`9023` by `Richard Höchenberger`_)

- `mne.viz.plot_drop_log` and :meth:`mne.Epochs.plot_drop_log` now omit displaying the subject name in the title if ``subject=None`` is passed (:gh:`9015` by `Richard Höchenberger`_)

- Plot ECoG tutorial now uses a real epilepsy seizure dataset and visualizes the seizure onset (:gh:`9087` by `Eric Larson`_, `Adam Li`_, `Alex Rockhill`_ and `Liberty Hamilton`_)

- Improve documentation of Report-Class (:gh:`9113` by `Martin Schulz`_)

- Add :func:`mne.channels.DigMontage.add_estimated_fiducials` which will add LPA, RPA and Nasion fiducial points to the ``DigMontage`` object in ``mri`` coordinate frame (:gh:`9118` by `Adam Li`_)

- :func:`mne.io.anonymize_info` now anonymizes also sex and hand fields when ``keep_his`` is ``False`` (:gh:`9103`, :gh:`9175` **by new contributor** |Rotem Falach|_ and `Richard Höchenberger`_)

- Add parameter ``theme`` to :class:`mne.viz.Brain` for optional Dark-Mode (:gh:`9149` by `Martin Schulz`_, `Guillaume Favelier`_)

- Add first_samp support for raw simulations with `mne.simulation.simulate_raw` and `mne.simulation.SourceSimulator` (:gh:`9166` by `Steven Bierer`_)

- `~mne.Evoked` gained a ``baseline`` attribute that is automatically assembled based on the baseline of the averaged `~mne.Epochs` (:gh:`9210` by `Richard Höchenberger`_)

- Add ``units`` parameter to :meth:`mne.io.Raw.get_data` to return data in the desired unit (:gh:`9136` by `Johann Benerradi`_ and `Stefan Appelhoff`_)

- Add :func:`mne.preprocessing.equalize_bads` to interpolate bad channels in a list of `~mne.Evoked`, `~mne.Epochs` or `~mne.io.Raw` having different sets of bad channels (:gh:`9241` by `Alex Gramfort`_)

- :meth:`mne.Epochs.equalize_event_counts` can now be called without providing a list of event names, and will equalize the counts of **all** event types present in the `~mne.Epochs` (:gh:`9261` by `Richard Höchenberger`_)

- :func:`mne.preprocessing.find_eog_events` and :func:`mne.preprocessing.create_eog_epochs` now accept a list of channel names, allowing you to specify multiple EOG channels at once (:gh:`9269` by `Richard Höchenberger`_)

- Improve performance of :func:`mne.set_bipolar_reference` (:gh:`9270` by `Martin Schulz`_)

- Add support for setting montages on fNIRS data, with built in standard montages for Artinis OctaMon and Artinis Brite23 devices (:gh:`9141` by `Johann Benerradi`_, `Robert Luke`_ and `Eric Larson`_)

- Enable support for reading SNIRF files with 2D optode positions (:gh:`9347` `Robert Luke`_)


Bugs
~~~~
- Fix bug with :func:`mne.time_frequency.tfr` where plot misbehaved. Plot now always returns a list of figures instead of a single figure handle (:gh:`8013` **by new contributor** |Eduard Ort|_)

- Fix bug with :func:`mne.viz.plot_evoked_topo` where set ylim parameters gets swapped across channel types. (:gh:`9207` **by new contributor** |Ram Pari|_)

- Fix bug with :func:`mne.io.read_raw_edf` where µV was not correctly recognized (:gh:`9187` **by new contributor** |Sumalyo Datta|_)

- Fix bug with :func:`mne.viz.plot_compare_evokeds` did not check type of combine. (:gh:`9151` **by new contributor** |Matteo Anelli|_)

- Fix bug with :func:`mne.viz.plot_evoked_topo` where ``ylim`` was only being applied to the first channel in the dataset (:gh:`9162` **by new contributor** |Ram Pari|_ )

- Fix bug with :func:`mne.Epochs.plot_image` allowing interactive zoom to work properly (:gh:`9152` by **by new contributor** |Maggie Clarke|_ and `Daniel McCloy`_)

- Fix bug with :func:`mne.Epochs.plot_image` where the ``x_label`` was different depending on the evoked parameter (:gh:`9115` **by new contributor** |Matteo Anelli|_)

- Fix bug with restricting :func:`mne.io.Raw.save` saving options to .fif and .fif.gz extensions (:gh:`9062` **by new contributor** |Valerii Chirkov|_)

- Fix bug with :func:`mne.io.read_raw_kit` where missing marker coils were not handled (:gh:`8989` **by new contributor** |Judy D Zhu|_)

- Fix bug with ``mne.connectivity.spectral_connectivity`` where time axis in Epochs data object was dropped. (:gh:`8839` **by new contributor** |Anna Padee|_)

- Fix bug with `mne.io.Raw.resample` to allow passing ``stim_picks='misc'`` (:gh:`8844` **by new contributor** |Enrico Varano|_ and `Eric Larson`_)

- Fix bugs with `mne.io.read_raw_persyst` where multiple ``Comments`` with the same name are allowed, and ``Comments`` with a "," character are now allowed (:gh:`8311` and :gh:`8806` **by new contributor** |Andres Rodriguez|_ and `Adam Li`_)

- Fix zen mode and scalebar toggling for :meth:`raw.plot() <mne.io.Raw.plot>` when using the ``macosx`` matplotlib backend (:gh:`8688` by `Daniel McCloy`_)

- Fix bug with :func:`mne.viz.snapshot_brain_montage` where the positions were incorrect (:gh:`8983` by `Eric Larson`_)

- Fix bug with :func:`mne.preprocessing.maxwell_filter` where the eSSS basis had to exactly match the good channels instead of being a superset (:gh:`8675` by `Eric Larson`_)

- Fix bug with ``mne.Report.add_bem_to_section`` where ``n_jobs != 1`` would cause ``n_jobs`` subsets of MRI images in some orientations to be flipped (:gh:`8713` by `Eric Larson`_)

- Fix bug with :meth:`raw.plot() <mne.io.Raw.plot>` where annotations didn't immediately appear when changing window duration (:gh:`8689` by `Daniel McCloy`_)

- Fix bug with :meth:`raw.plot() <mne.io.Raw.plot>` where ``scalings='auto'`` did not compute scalings using the full range of data (:gh:`8806` by `Eric Larson`_)

- Fix bug with :meth:`raw.plot() <mne.io.Raw.plot>` where setting a ``lowpass`` could lead to non-data-channels not plotting (:gh:`8954` by `Eric Larson`_)

- Fix bug with :meth:`mne.io.Raw.load_data` and :meth:`mne.Epochs.drop_bad` where ``verbose`` logging was not handled properly (:gh:`8884` by `Eric Larson`_)

- Fix bug with :func:`mne.io.read_raw_nicolet` where header type values such as num_sample and duration_in_sec where not parsed properly (:gh:`8712` by `Alex Gramfort`_)

- Fix bug with :func:`mne.preprocessing.read_ica_eeglab` when reading decompositions using PCA dimensionality reduction (:gh:`8780` by `Alex Gramfort`_ and `Eric Larson`_)

- Fix bug with :func:`mne.minimum_norm.make_inverse_operator` where ``depth`` was errantly restricted to be less than or equal to 1. (:gh:`8804` by `Eric Larson`_)

- Fix bug with :func:`mne.stats.permutation_cluster_1samp_test` and related clustering functions when ``adjacency=None`` and ``out_type='indices'`` (:gh:`#8842` by `Eric Larson`_)

- Fix bug with :func:`mne.viz.plot_alignment` where plotting a sphere model could ignore the ``brain`` argument (:gh:`8857` by `Eric Larson`_)

- Fix bug with :func:`mne.SourceEstimate.plot` where flatmaps were not positioned properly when using ``hemi='both'`` (:gh:`9315` by `Eric Larson`_)

- Fix bug with :meth:`mne.Annotations.save` where files could be overwritten accidentally, it can now be controlled via the ``overwrite`` argument (:gh:`8896` by `Eric Larson`_)

- Fix bug with ``replace`` argument of ``mne.Report.add_bem_to_section`` and ``mne.Report.add_slider_to_section`` (:gh:`8723` by `Eric Larson`_)

- Fix bug with :func:`mne.chpi.compute_chpi_locs` where all cHPI coils being off would lead to an empty array of the wrong dimensionality (:gh:`8956` by `Eric Larson`_)

- Fix bug with :func:`mne.extract_label_time_course` where labels, STCs, and the source space were not checked for compatible ``subject`` attributes (:gh:`9284` by `Eric Larson`_)

- Fix bug with :func:`mne.grow_labels` where ``overlap=False`` could run forever or raise an error (:gh:`9317` by `Eric Larson`_)

- Fix compatibility bugs with :mod:`mne_realtime` (:gh:`8845` by `Eric Larson`_)

- Fix bug with `mne.viz.Brain` where non-inflated surfaces had an X-offset imposed by default (:gh:`8794` by `Eric Larson`_)

- Fix bug with :ref:`mne coreg` where nasion values were not updated when clicking (:gh:`8793` by `Eric Larson`_)

- Fix bug with matplotlib-based 3D plotting where ``Axes3D`` were not properly initialized in :func:`mne.viz.plot_source_estimates` (:gh:`8811` by `Chris Bailey`_)

- Allow sEEG channel types in :meth:`mne.Evoked.plot_joint` (:gh:`8736` by `Daniel McCloy`_)

- Fix bug where hidden annotations could be deleted interactively in :meth:`mne.io.Raw.plot` windows (:gh:`8831` by `Daniel McCloy`_)

- Function :func:`mne.set_bipolar_reference` was not working when passing ``Epochs`` constructed with some ``picks`` (:gh:`8728` by `Alex Gramfort`_)

- Fix anonymization issue of FIF files after IO round trip (:gh:`8731` by `Alex Gramfort`_)

- Fix bug in `mne.preprocessing.ICA.plot_sources` where right-clicking component names could yield `~mne.preprocessing.ICA.plot_properties` windows for the wrong component if ``picks`` had been specified (:gh:`8996` by `Daniel McCloy`_)

- Fix title not shown in :func:`mne.viz.plot_montage` (:gh:`8752` by `Clemens Brunner`_)

- `mne.io.read_raw_egi` now correctly handles `pathlib.Path` filenames (:gh:`8759` by `Richard Höchenberger`_)

- `mne.viz.plot_evoked` and `mne.Evoked.plot` now correctly plot global field power (GFP) for EEG data when ``gfp=True`` or ``gfp='only'`` is passed (used to plot RMS). For MEG data, we continue to plot the RMS, but now label it correctly as such (:gh:`8775` by `Richard Höchenberger`_)

- Fix bug with :ref:`mne make_scalp_surfaces` where ``--overwrite`` was not functional (:gh:`8800` by `Yu-Han Luo`_)

- Fix bug with :func:`mne.viz.plot_topomap` when plotting gradiometers with a missing channel in a pair (:gh:`8817` by `Alex Gramfort`_)

- :meth:`epochs.crop() <mne.Epochs.crop>` now also adjusts the ``reject_tmin`` and ``reject_tmax`` attributes if necessary (:gh:`8821` by `Richard Höchenberger`_)

- When creating `~mne.Epochs`, we now ensure that ``reject_tmin`` and ``reject_tmax`` cannot fall outside of the epochs' time interval anymore (:gh:`8821` by `Richard Höchenberger`_)

- `~mne.io.read_raw_bti` erroneously treated response channels as respiratory channels (:gh:`8856` by `Richard Höchenberger`_)

- The RMS trace shown in the time viewer of `~mne.SourceEstimate` plots is now correctly labeled as ``RMS`` (was ``GFP`` before) (:gh:`8965` by `Richard Höchenberger`_)

- Fix bug with :meth:`mne.SourceEstimate.plot` and related functions where the scalars were not interactively updated properly (:gh:`8985` by `Eric Larson`_)

- Fix bug with mne.channels.find_ch_adjacency() returning wrong adjacency for Neuromag122-Data (:gh:`8891` by `Martin Schulz`_)

- Fix :func:`mne.read_dipole` yielding :class:`mne.Dipole` objects that could not be indexed (:gh:`8963` by `Marijn van Vliet`_)

- Fix bug when setting n_jobs > 1 in :meth:`mne.Report.parse_folder` (:gh:`9109` by `Martin Schulz`_)

- Fix bug with :meth:`mne.Evoked.plot_image` where an incorrect clim parameter did not raise any error (:gh:`9115` **by new contributor** |Matteo Anelli|_)

- Fix bug with ``mne.io.Raw.pick`` where incorrect fnirs types were returned (:gh:`9178` by `Robert Luke`_)

- Fix bug when passing both axes and picks to `mne.viz.plot_compare_evokeds` (:gh:`9252` by `Daniel McCloy`_)

- Improved string representation of `~mne.Epochs` containing multiple event types; improved (and more mathematically correct) ``evoked.comment`` in the `mne.combine_evoked` output; and better (and often more concise) legend labels in the figures created via `~mne.viz.plot_compare_evokeds` (:gh:`9027` by `Richard Höchenberger`_)

- :func:`mne.preprocessing.find_ecg_events` now correctly handles situation where no ECG activity could be detected, and correctly returns an empty array of ECG events (:gh:`9236` by `Richard Höchenberger`_)

- Fix bug with ``picks`` attribute for `~mne.Epochs` after calling :meth:`mne.Epochs.add_channels` (:gh:`9246` by `Alex Gramfort`_)

- Fix bug where ``backend='notebook'`` could not be used in :meth:`mne.SourceEstimate.plot` (:gh:`9305` by `Jean-Remi King`_)

- `mne.preprocessing.compute_proj_eog` and `mne.preprocessing.compute_proj_ecg` now return empty lists if no EOG or ECG events, respectively, could be found. Previously, we'd return ``None`` in these situations, which does not match the documented behavior of returning a list of projectors (:gh:`9277` by `Richard Höchenberger`_)

API changes
~~~~~~~~~~~
- Introduced new ``'auto'`` settings for ``ICA.max_iter``. The old default ``max_iter=200`` will be removed in MNE-Python 0.24 (:gh:`9099` **by new contributor** |Cora Kim|_)

- ``mne.viz.plot_sensors_connectivity`` now allows setting the colorbar label via the ``cbar_label`` parameter (:gh:`9248` by `Daniel McCloy`_)

- ``mne.read_selection`` has been deprecated in favor of `mne.read_vectorview_selection`. ``mne.read_selection`` will be removed in MNE-Python 0.24 (:gh:`8870` by `Richard Höchenberger`_)

- ``mne.beamformer.tf_dics`` has been deprecated and will be removed in MNE-Python 0.24 (:gh:`9122` by `Britta Westner`_)

- Fitting `~mne.preprocessing.ICA` on baseline-corrected `~mne.Epochs`, and / or applying it on baseline-corrected `~mne.Epochs` or `~mne.Evoked` data will now display a warning. Users are advised to only baseline correct their data after cleaning is completed (:gh:`9033` by `Richard Höchenberger`_)

- Supplying multiple channel names to `mne.preprocessing.find_eog_events` or `mne.preprocessing.compute_proj_eog` as a string of comma-separated channel names has been deprecated; please pass a list of channel names instead. Support for comma-separated strings will be removed in MNE-Python 0.24 (:gh:`9269` by `Richard Höchenberger`_)

- The default in :func:`mne.beamformer.make_dics` of ``real_filter=False`` will change to ``real_filter=True`` in 0.24 (:gh:`9340` by `Britta Westner`_)

Authors
~~~~~~~

People who contributed to this release in alphabetical order
(people with a + are first time contributors):

* Adam Li
* Alex Rockhill
* Alexandre Gramfort
* Ana Radanovic
* Andres Rodriguez+
* Anna Padee+
* Apoorva Karekal+
* Britta Westner
* Catalina Magalvan
* Christian Brodbeck
* Christian Mista
* Christian O'Reilly
* Christina Zhao
* Christopher J. Bailey
* Clemens Brunner
* Cora Kim+
* Daniel McCloy
* Denis A. Engemann
* Dominik Welke+
* Eduard Ort
* Enrico Varano+
* Eric Larson
* Erica Peterson+
* Evgenii Kalenkovich
* Felix Klotzsche+
* Giorgio Marinato
* Guillaume Favelier
* Jack Zhang+
* Jean-Remi King
* Johann Benerradi
* Joris Van den Bossche
* Judy D Zhu+
* Liberty Hamilton
* Luke Bloy
* Maggie Clarke+
* Mainak Jas
* Manorama Kadwani
* Marijn van Vliet
* Martin Schulz
* Matt Sanderson+
* Matteo Anelli+
* Nicolas Gensollen
* Ram Pari+
* Richard Höchenberger
* Richard Koehler+
* Robert Luke
* Rotem Falach+
* Sebastien Treguer
* Silvia Cotroneo+
* Stefan Appelhoff
* Steven Bierer
* Sumalyo Datta+
* Timon Merk
* Tristan Stenner
* Valerii Chirkov+
* Victoria Peterson
* Yu-Han Luo
* Zhi Zhang+
